#include "tabsTest.h"
#include "ui_tabsTest.h"


QString version = "a01";
QString appName = "tabsTest";

tabsTest::tabsTest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tabsTest) {
    ui->setupUi(this);

    QString windowTitle = appName + " (version "+version+")" + " Qt "+QT_VERSION_STR;
    setWindowTitle(windowTitle);

    
//    There are 10 pages (I call them tabs) in the ui. All the tabs are expected to be displayed.
//    In the actual app that this code is derived from the original app uses a settings file which remembers
//     the last tab used and then starts with that tab selected and in focus. 
//    It works as expected in Qt 6.5.0 but in Qt 6.5.1 the correct tab is selected but has become 
//     the leftmost tab in some cases as commented below. After the inital ui, all tabs are displayed
//     when anotehr tab is selected. 
//    Using Qt 6.6.0 beta, the behaviour has returned to what was expected. 
    
//    ui->tabWidget->setCurrentWidget(ui->tabAppointments);  // becomes left tab under 6.5.1
//    ui->tabWidget->setCurrentWidget(ui->tabExercise);      // becomes left tab under 6.5.1
//    ui->tabWidget->setCurrentWidget(ui->tabIllness);
//    ui->tabWidget->setCurrentWidget(ui->tabInjury);
//    ui->tabWidget->setCurrentWidget(ui->tabMouthProblems);
//    ui->tabWidget->setCurrentWidget(ui->tabMedicine);      // becomes left tab under 6.5.1
    ui->tabWidget->setCurrentWidget(ui->tabPathology);     // becomes left tab under 6.5.1
//    ui->tabWidget->setCurrentWidget(ui->tabWeights);
//    ui->tabWidget->setCurrentWidget(ui->tabEyes);

}

tabsTest::~tabsTest() {
    delete ui;
}

