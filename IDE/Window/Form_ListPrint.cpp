#include "Form_ListPrint.h"
#include "ui_Form_ListPrint.h"
#include "QResizeEvent"

Form_ListPrint::Form_ListPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_ListPrint)
{
    ui->setupUi(this);
}

Form_ListPrint::~Form_ListPrint()
{
    delete ui;
}

void Form_ListPrint::addMsg(QString code, QString text, QString project, QString file, int row, icoType type, QColor textColor)
{
    QTreeWidgetItem* t_item = new QTreeWidgetItem;
    QIcon t_ico;
    switch (type){
    case icoType::tip:{
        t_ico = QIcon(":/CompileTip/icon/compileTip/tip.png");
        break;
    }
    case icoType::ok:{
        t_ico = QIcon(":/CompileTip/icon/compileTip/ok.png");
        break;
    }
    case icoType::error:{
        t_ico = QIcon(":/CompileTip/icon/compileTip/error.png");
        break;
    }
    case icoType::warning:{
        t_ico = QIcon(":/CompileTip/icon/compileTip/warning.png");
        break;
    }
    default:{
        t_ico = QIcon(":/CompileTip/icon/compileTip/tip.png");
        break;
    }
    }

    t_item->setText(0,code);
    t_item->setForeground(1,textColor);
    t_item->setText(1,text);
    t_item->setText(2,project);
    t_item->setText(3,file);
    if(row <= 0){
        t_item->setText(4,"");
    }
    else{
        t_item->setText(4,QString::number(row));
    }
    t_item->setIcon(0,t_ico);
    ui->treeWidget->addTopLevelItem(t_item);
}


//删除所有内容
void Form_ListPrint::clearMsg()
{
    for(int a = ui->treeWidget->topLevelItemCount()-1; a>=0; a--){
        delete ui->treeWidget->topLevelItem(a);
    }
}


//尺寸被改变，动态绑定
void Form_ListPrint::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    int t_width = event->size().width();
    if(t_width < 355){
        return;
    }
    ui->treeWidget->setColumnWidth(0,40);
    ui->treeWidget->setColumnWidth(4,50);
    ui->treeWidget->setColumnWidth(3,100);
    ui->treeWidget->setColumnWidth(2,100);
    ui->treeWidget->setColumnWidth(1,t_width - 310);
}