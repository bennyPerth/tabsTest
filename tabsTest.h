#ifndef TABSTEST_H
#define TABSTEST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tabsTest; }
QT_END_NAMESPACE

class tabsTest : public QMainWindow
{
    Q_OBJECT

public:
    tabsTest(QWidget *parent = nullptr);
    ~tabsTest();

private:
    Ui::tabsTest *ui;
};
#endif // TABSTEST_H
