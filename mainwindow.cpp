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
#include "custom_widget.h"
#include <QPushButton>

int i,j;

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

void MainWindow::on_plus_clicked_1_1() {
    courseCode[1][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_2() {
    courseCode[1][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_3() {
    courseCode[1][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_4() {
    courseCode[1][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_5() {
    courseCode[1][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_6() {
    courseCode[1][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_1_7() {
    courseCode[1][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_1() {
    courseCode[2][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_2() {
    courseCode[2][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_3() {
    courseCode[2][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_4() {
    courseCode[2][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_5() {
    courseCode[2][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_6() {
    courseCode[2][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_2_7() {
    courseCode[2][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_1() {
    courseCode[3][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_2() {
    courseCode[3][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_3() {
    courseCode[3][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_4() {
    courseCode[3][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_5() {
    courseCode[3][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_6() {
    courseCode[3][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_3_7() {
    courseCode[3][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_1() {
    courseCode[4][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_2() {
    courseCode[4][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_3() {
    courseCode[4][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_4() {
    courseCode[4][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_5() {
    courseCode[4][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_6() {
    courseCode[4][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_4_7() {
    courseCode[4][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_1() {
    courseCode[5][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_2() {
    courseCode[5][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_3() {
    courseCode[5][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_4() {
    courseCode[5][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_5() {
    courseCode[5][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_6() {
    courseCode[5][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_5_7() {
    courseCode[5][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_1() {
    courseCode[6][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_2() {
    courseCode[6][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_3() {
    courseCode[6][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_4() {
    courseCode[6][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_5() {
    courseCode[6][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_6() {
    courseCode[6][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_6_7() {
    courseCode[6][7]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_1() {
    courseCode[7][1]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_2() {
    courseCode[7][2]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_3() {
    courseCode[7][3]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_4() {
    courseCode[7][4]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_5() {
    courseCode[7][5]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_6() {
    courseCode[7][6]->setText("asdadas");
}

void MainWindow::on_plus_clicked_7_7() {
    courseCode[7][7]->setText("asdadas");
}


// void MainWindow::on_plus_clicked()
// {

//     courseCode[7][7]->setText("asdadas");
//     qDebug() << "A";
// }


void MainWindow::TableWidgetDisplay() {

    // int columnNo=7, rowNo = 21;
    // QTableWidget *table = new QTableWidget(this);
    // table->setRowCount(rowNo);
    // table->setColumnCount(columnNo);

    // QStringList hlabels;
    // hlabels << "9-10" << "10-11" << "11-12" << "12-1"
    //         <<"1-2" << "2-3" << "3-4";
    // table->setHorizontalHeaderLabels(hlabels);

    // for(int i=0; i<rowNo; i++) {
    //     QTableWidgetItem *item;

    //     // item = new QTableWidgetItem;


    //     for(int j=0; j<columnNo; j++) {

    //         item = new QTableWidgetItem;
    //         item->setText(QString::number(i+j));
    //         table->setItem(i,j,item);

    //         // item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
    //         // item->setBackground(Qt::NoBrush);
    //     }
    //     // table->setSpan(0,0,1,2);

    QGridLayout *layout = new QGridLayout(this);
    QStringList daysOfWeek;
    daysOfWeek << " " << "Sunday" << "Monday" << "Tuesday" << "Wednesday"
               << "Thursday" << "Friday" << "Saturday";
    QStringList TimeofDay;
    TimeofDay << " " << "9-10" << "10-11" << "11-12" << "12-1"
              <<"1-2" << "2-3" << "3-4";

    for(i=0; i<=7; i++) {

        QGridLayout *rowLayout = new QGridLayout(this);

        for(j=0; j<=7; j++) {

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
            }

            if (i == 1 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_1);
            }

            if (i == 1 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_2);
            }

            if (i == 1 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_3);
            }

            if (i == 1 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_4);
            }

            if (i == 1 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_5);
            }

            if (i == 1 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_6);
            }

            if (i == 1 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_1_7);
            }

            if (i == 2 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_1);
            }

            if (i == 2 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_2);
            }

            if (i == 2 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_3);
            }

            if (i == 2 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_4);
            }

            if (i == 2 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_5);
            }

            if (i == 2 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_6);
            }

            if (i == 2 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_2_7);
            }

            if (i == 3 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_1);
            }

            if (i == 3 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_2);
            }

            if (i == 3 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_3);
            }

            if (i == 3 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_4);
            }

            if (i == 3 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_5);
            }

            if (i == 3 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_6);
            }

            if (i == 3 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_3_7);
            }

            if (i == 4 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_1);
            }

            if (i == 4 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_2);
            }

            if (i == 4 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_3);
            }

            if (i == 4 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_4);
            }

            if (i == 4 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_5);
            }

            if (i == 4 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_6);
            }

            if (i == 4 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_4_7);
            }

            if (i == 5 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_1);
            }

            if (i == 5 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_2);
            }

            if (i == 5 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_3);
            }

            if (i == 5 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_4);
            }

            if (i == 5 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_5);
            }

            if (i == 5 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_6);
            }

            if (i == 5 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_5_7);
            }

            if (i == 6 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_1);
            }

            if (i == 6 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_2);
            }

            if (i == 6 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_3);
            }

            if (i == 6 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_4);
            }

            if (i == 6 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_5);
            }

            if (i == 6 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_6);
            }

            if (i == 6 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_6_7);
            }

            if (i == 7 && j == 1) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_1);
            }

            if (i == 7 && j == 2) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_2);
            }

            if (i == 7 && j == 3) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_3);
            }

            if (i == 7 && j == 4) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_4);
            }

            if (i == 7 && j == 5) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_5);
            }

            if (i == 7 && j == 6) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_6);
            }

            if (i == 7 && j == 7) {
                connect(courseCode[i][j], &QPushButton::clicked, this, &MainWindow::on_plus_clicked_7_7);
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
