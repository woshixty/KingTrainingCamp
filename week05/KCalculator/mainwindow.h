#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_m_value_1_clicked();

    void on_m_value_2_clicked();

    void on_m_value_3_clicked();

    void on_m_value_4_clicked();

    void on_m_value_5_clicked();

    void on_m_value_8_clicked();

    void on_m_value_7_clicked();

    void on_m_value_6_clicked();

    void on_m_value_9_clicked();

    void on_m_value_0_clicked();

    void on_m_button_add_clicked();

    void on_m_button_minus_clicked();

    void on_m_button_multiply_clicked();

    void on_m_button_divide_clicked();

    void on_m_equal_clicked();

    void on_m_left_bracket_clicked();

    void on_m_clear_clicked();

    void on_m_button_backstep_clicked();

    void on_m_right_bracket_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    size_t m_left_brackets = 0;
    size_t m_right_brackets = 0;
};

#endif // MAINWINDOW_H
