#include "ktodayroom.h"
#include "ui_ktodayroom.h"

KTodayRoom::KTodayRoom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KTodayRoom)
{
    ui->setupUi(this);
    ui->m_table_room_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

KTodayRoom::~KTodayRoom()
{
    delete ui;
}

void KTodayRoom::setTableModel(QSqlTableModel *model)
{
    m_room_table_model = model;
}

void KTodayRoom::initPage()
{
    // 字段显示名
    m_room_table_model->setHeaderData(m_room_table_model->fieldIndex("id"),Qt::Horizontal,"房间ID");
    m_room_table_model->setHeaderData(m_room_table_model->fieldIndex("room_type"),Qt::Horizontal,"房间类型");
    m_room_table_model->setHeaderData(m_room_table_model->fieldIndex("room_today_price"),Qt::Horizontal,"今日价格");
    m_room_table_model->setHeaderData(m_room_table_model->fieldIndex("room_normal_price"),Qt::Horizontal,"门市价格");
    m_room_table_model->setHeaderData(m_room_table_model->fieldIndex("room_vip_price"),Qt::Horizontal,"VIP价格");

    // 关联选择模型
    m_selection = new QItemSelectionModel(m_room_table_model);

    connect(m_selection,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentRowChanged(QModelIndex,QModelIndex)));

    // 设置只能选择行
    ui->m_table_room_info->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设置数据模型
    ui->m_table_room_info->setModel(m_room_table_model);
    // 设置选择模型
    ui->m_table_room_info->setSelectionModel(m_selection);

    // 隐藏列
    ui->m_table_room_info->setColumnHidden(m_room_table_model->fieldIndex("room_pix_map"), true);
    ui->m_table_room_info->resizeColumnsToContents();
}

void KTodayRoom::on_checkin_room_m()
{
    initPage();
}

void KTodayRoom::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    // 当前行号
    int curRecNum = current.row();
    // 获取当前纪录
    QSqlRecord curRec = m_room_table_model->record(curRecNum);
    QByteArray data = curRec.value("room_pix_map").toByteArray();
    QPixmap pic;
    pic.loadFromData(data);
    ui->label->setPixmap(pic.scaledToWidth(ui->label->size().width()));
}

void KTodayRoom::on_pushButton_clicked()
{
    // 设置照片 照片(*.jpg)
    QString aFile = QFileDialog::getOpenFileName(this, "选择图片文件", "", "");
    if (aFile.isEmpty())
       return;

    QByteArray data;
    // fileName为二进制数据文件名
    QFile* file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();

    int curRecNo = m_selection->currentIndex().row();
    // 获取当前记录
    QSqlRecord curRec = m_room_table_model->record(curRecNo);
    // 设置字段数据
    curRec.setValue("room_pix_map", data);
    m_room_table_model->setRecord(curRecNo, curRec);

    QPixmap pic;
    // 在界面上显示
    pic.load(aFile);
    ui->label->setPixmap(pic.scaledToWidth(ui->label->width()));
    m_room_table_model->submitAll();
}
