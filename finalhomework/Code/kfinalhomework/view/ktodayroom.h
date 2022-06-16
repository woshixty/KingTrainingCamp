#ifndef KTODAYROOM_H
#define KTODAYROOM_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <qabstractitemmodel.h>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QDataWidgetMapper>
#include <qabstractitemmodel.h>
#include <QSqlRecord>
#include <QFileDialog>

namespace Ui {
class KTodayRoom;
}

class KTodayRoom : public QWidget
{
    Q_OBJECT

public:
    explicit KTodayRoom(QWidget *parent = nullptr);
    ~KTodayRoom();
    void setTableModel(QSqlTableModel *model);
    void initPage();

private slots:
    void on_checkin_room_m();
    void on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_pushButton_clicked();

private:
    Ui::KTodayRoom *ui;
    QSqlTableModel *m_room_table_model;
    QItemSelectionModel *m_selection;
};

#endif // KTODAYROOM_H
