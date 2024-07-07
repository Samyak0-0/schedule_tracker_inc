#ifndef SELECTION_PAGE_H
#define SELECTION_PAGE_H

#include <QDialog>

namespace Ui {
class selection_page;
}

class selection_page : public QDialog
{
    Q_OBJECT

public:
    explicit selection_page(QWidget *parent = nullptr);
    ~selection_page();

private:
    Ui::selection_page *ui;
    void selectionForm();
};

#endif // SELECTION_PAGE_H
