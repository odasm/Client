#ifndef _LIBRARY_H_
#define _LIBRARY_H_

class LibraryGridView;

#include "Database.h"
#include "GameLauncher.h"
#include "BuddyList.h"
#include "LibraryGridView.h"

#include <QWidget>
#include <QProcess>
#include <QSettings>
#include <QDir>
#include <QGridLayout>
#include <QList>
#include <QStackedWidget>

/** Library class.
 * Class to handle the library section of the launcher
*/
class Library : public QWidget
{
    Q_OBJECT

public:
    Library(QSettings* p, QWidget* parent = 0);

    void launchGame(QString gameName);
    void changeLaunchOpts(QString gameName);

    static Database db;

private:
    GameLauncher gl;

    LibraryGridView* gridView;
    QLineEdit* searchBox;
    QStackedWidget* viewStack;

    void init(QSettings* p);
};

#endif
