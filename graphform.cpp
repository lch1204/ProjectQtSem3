#include "graphform.h"
#include "ui_graphform.h"

GraphForm::GraphForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GraphForm)
{
    ui->setupUi(this);
}

GraphForm::~GraphForm()
{
    delete ui;
}
