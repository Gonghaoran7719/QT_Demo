#include "register.h"
#include "ui_register.h"
//#include "login.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    setWindowTitle(tr("注册"));

    //connect((Login *)parent,SIGNAL(transmitdb(QSqlDatabase)),this,SLOT(receivedb(QSqlDatabase)));

}

Register::~Register()
{
    delete ui;
}

void Register::setParent(Login *dialog)
{
    if(dialog != NULL){
        pWidget = dialog;
    }
}



//创建一个名为userInfo的表，id为主键 顺序为:ID 用户名 密码 email 历史
//QString create_sql      = "create table userInfo (chatid int primary key, name varchar(30), password varchar(30), email varchar(30), history int)";
//选中名为userInfo的表
//QString select_table    = "select tbl_name userRegiste from sqlite_master where type = 'table'";
//获取表中的最大ID，以chatid
//QString select_max_sql  = "select max(chatid) from userInfo";
//向表userInfo中插入数据  顺序为:用户名 密码 email
//QString insert_sql      = "insert into userInfo values (?, ?, ?)";
//选中userInfo表中的name列
//QString select_sql      = "select name from userInfo";



//注册函数.仅仅获取相关值，不做检测和数据库操作
void Register::on_registerCheckButton_clicked()
{
    pWidget->user_info_stu.userName = ui->lineEditName->text();
    pWidget->user_info_stu.passwd = ui->lineEditPassword->text();
    pWidget->user_info_stu.email = ui->lineEditEmail->text();
    qDebug() << "333:" << pWidget->user_info_stu.userName << pWidget->user_info_stu.passwd
             << pWidget->user_info_stu.email;
    this->close();

}
