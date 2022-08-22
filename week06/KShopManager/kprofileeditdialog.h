#ifndef KPROFILEEDITDIALOG_H
#define KPROFILEEDITDIALOG_H

#include <QDialog>

namespace Ui {
class KProfileEditDialog;
}

class KProfileEditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KProfileEditDialog(QWidget *parent = 0);
    ~KProfileEditDialog();

private:
    Ui::KProfileEditDialog *ui;
};

#endif // KPROFILEEDITDIALOG_H
