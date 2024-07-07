#include "selection_page.h"
#include "ui_selection_page.h"
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>

selection_page::selection_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::selection_page)
{
    ui->setupUi(this);
    selectionForm();
}

selection_page::~selection_page()
{
    delete ui;
}

void selection_page::selectionForm() {

    QGridLayout *layout = new QGridLayout(this);

    QLabel *label1 = new QLabel(this);
    label1->setText("Course Code: ");
    QLineEdit *lineEdit = new QLineEdit(this);

    layout->addWidget(label1, 0, 0);
    layout->addWidget(lineEdit, 0, 1);

    // this->centralWidget()->setLayout(layout);
}
