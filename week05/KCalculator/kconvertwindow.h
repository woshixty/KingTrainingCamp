#ifndef KCONVERTWINDOW_H
#define KCONVERTWINDOW_H

#include <QWidget>

namespace Ui {
class kConvertWindow;
}

class KConvertWindow : public QWidget
{
    Q_OBJECT

public:
    explicit KConvertWindow(QWidget *parent = 0);
    ~KConvertWindow();

private:
    Ui::kConvertWindow *ui;
};

#endif // KCONVERTWINDOW_H
