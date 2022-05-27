#ifndef KCONVERTWINDOW_H
#define KCONVERTWINDOW_H

#include <QWidget>
#include <QLineEdit>

enum BaseType {HEX = 16, DEC = 10, OCT = 8, BIN = 2};

namespace Ui {
class kConvertWindow;
}

class KConvertWindow : public QWidget
{
    Q_OBJECT

public:
    explicit KConvertWindow(QWidget *parent = 0);
    ~KConvertWindow();

private slots:
    void on_radioButton_HEX_clicked();

    void on_radioButton_DEC_clicked();

    void on_radioButton_OCT_clicked();

    void on_radioButton_BIN_clicked();

    void on_m_btn_A_clicked();

    void on_m_btn_B_clicked();

    void on_m_btn_C_clicked();

    void on_m_btn_D_clicked();

    void on_m_btn_E_clicked();

    void on_m_btn_F_clicked();

    void on_m_btn_1_clicked();

    void on_m_btn_2_clicked();

    void on_m_btn_3_clicked();

    void on_m_btn_4_clicked();

    void on_m_btn_5_clicked();

    void on_m_btn_6_clicked();

    void on_m_btn_7_clicked();

    void on_m_btn_8_clicked();

    void on_m_btn_9_clicked();

    void on_m_btn_back_clicked();

    void on_m_btn_clear_clicked();

    void on_m_btn_answer_clicked();

    void on_m_btn_dot_clicked();

    void on_m_btn_left_move_clicked();

    void on_m_btn_right_move_clicked();

    void on_m_btn_aom_clicked();

private:
    Ui::kConvertWindow *ui;
    void initHEX(bool flag);
    void initDEC(bool flag);
    void initOCT(bool flag);
    void initBIN(bool flag);
    void keepOnAll(bool flag);
    BaseType getTheRadio();
    QLineEdit *getLineEdit();
    void writeLineEdit(QString str);
};

#endif // KCONVERTWINDOW_H
