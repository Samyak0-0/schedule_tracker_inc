#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_plus_clicked(int a, int b);


private slots:


    // void on_plus_clicked_1_1();
    // void on_plus_clicked_1_2();
    // void on_plus_clicked_1_3();
    // void on_plus_clicked_1_4();
    // void on_plus_clicked_1_5();
    // void on_plus_clicked_1_6();
    // void on_plus_clicked_1_7();

    // void on_plus_clicked_2_1();
    // void on_plus_clicked_2_2();
    // void on_plus_clicked_2_3();
    // void on_plus_clicked_2_4();
    // void on_plus_clicked_2_5();
    // void on_plus_clicked_2_6();
    // void on_plus_clicked_2_7();

    // void on_plus_clicked_3_1();
    // void on_plus_clicked_3_2();
    // void on_plus_clicked_3_3();
    // void on_plus_clicked_3_4();
    // void on_plus_clicked_3_5();
    // void on_plus_clicked_3_6();
    // void on_plus_clicked_3_7();

    // void on_plus_clicked_4_1();
    // void on_plus_clicked_4_2();
    // void on_plus_clicked_4_3();
    // void on_plus_clicked_4_4();
    // void on_plus_clicked_4_5();
    // void on_plus_clicked_4_6();
    // void on_plus_clicked_4_7();

    // void on_plus_clicked_5_1();
    // void on_plus_clicked_5_2();
    // void on_plus_clicked_5_3();
    // void on_plus_clicked_5_4();
    // void on_plus_clicked_5_5();
    // void on_plus_clicked_5_6();
    // void on_plus_clicked_5_7();

    // void on_plus_clicked_6_1();
    // void on_plus_clicked_6_2();
    // void on_plus_clicked_6_3();
    // void on_plus_clicked_6_4();
    // void on_plus_clicked_6_5();
    // void on_plus_clicked_6_6();
    // void on_plus_clicked_6_7();

    // void on_plus_clicked_7_1();
    // void on_plus_clicked_7_2();
    // void on_plus_clicked_7_3();
    // void on_plus_clicked_7_4();
    // void on_plus_clicked_7_5();
    // void on_plus_clicked_7_6();
    // void on_plus_clicked_7_7();


private:
    Ui::MainWindow *ui;
    void TableWidgetDisplay();
    QPushButton *courseCode[8][8];
};
#endif // MAINWINDOW_H
