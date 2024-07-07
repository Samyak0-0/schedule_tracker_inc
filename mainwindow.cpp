#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QProgressBar>
#include <QVBoxLayout>
#include <QWidget>
#include <QtGui>
#include <QColor>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

#include "selection_page.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TableWidgetDisplay();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plus_clicked(int a, int b)
{
    if(courseCode[a][b]->text()=="+") {
        courseCode[a][b]->setText("n");
    } else {
        courseCode[a][b]->setText("v");
    }
    selection_page selectionPage;
    selectionPage.setModal(true);
    selectionPage.exec();

}


void MainWindow::TableWidgetDisplay() {


    QGridLayout *layout = new QGridLayout(this);
    QStringList daysOfWeek;
    daysOfWeek << " " << "Sunday" << "Monday" << "Tuesday" << "Wednesday"
               << "Thursday" << "Friday" << "Saturday";
    QStringList TimeofDay;
    TimeofDay << " " << "9-10" << "10-11" << "11-12" << "12-1"
              <<"1-2" << "2-3" << "3-4";

    for(int i=0; i<=7; i++) {

        QGridLayout *rowLayout = new QGridLayout(this);

        for(int j=0; j<=7; j++) {

            courseCode[i][j] = new QPushButton("courseCode", this);
            courseCode[i][j]->setStyleSheet("QPushButton {border: none;}");
            QPushButton *assignmentsDue = new QPushButton();
            if(i==0 && j==0){
                courseCode[i][j]->setText(" ");
                rowLayout->addWidget(courseCode[i][j], 0, 0);
            } else if(i==0) {
                courseCode[i][j]->setText(TimeofDay[j]);
                rowLayout->addWidget(courseCode[i][j], 0, j);
            } else if(j==0) {
                courseCode[i][j]->setText(daysOfWeek[i]);
                rowLayout->addWidget(courseCode[i][j], 0, 0);
            } else {
                courseCode[i][j] -> setText("+");
                assignmentsDue -> setText(" ");
                QProgressBar *progressBar = new QProgressBar;
                progressBar->setRange(0, 100);
                progressBar->setValue(50);
                rowLayout->addWidget(courseCode[i][j], 0, j);
                // rowLayout->addWidget(assignmentsDue, 1, j);
                // rowLayout->addWidget(progressBar, 2, j);
                QObject::connect(courseCode[i][j], &QPushButton::clicked, [this,i,j]() {
                    this->on_plus_clicked(i,j);
                });
            }


        }

        layout->addLayout(rowLayout, i, 0);
    }

    // QGridLayout *capsule = new QGridLayout(this);
    // QLabel *label_1 = new QLabel();
    // label_1 -> setText("abced");
    // QLabel *label_2 = new QLabel();
    // label_2 -> setText("abcedoooooooooooooo");
    // capsule->addWidget(label_1, 0,0);
    // capsule->addWidget(label_2, 1,0);

    // QGridLayout *capsule2 = new QGridLayout(this);
    // QLabel *label_3 = new QLabel();
    // label_3 -> setText("dsfdsfdsgsg");
    // QLabel *label_4 = new QLabel();
    // label_4 -> setText("abcedoooooooooooooo");
    // capsule2->addWidget(label_3, 0,0);
    // capsule2->addWidget(label_4, 1,0);

    // layout->addLayout(capsule, 0, 0);
    // layout->addLayout(capsule2, 0, 1);


    this->centralWidget()->setLayout(layout);


}
