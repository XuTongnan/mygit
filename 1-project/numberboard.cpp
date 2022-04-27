#include "numberboard.h"
#include "ui_numberboard.h"

NumberBoard::NumberBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NumberBoard)
{
    ui->setupUi(this);
}

NumberBoard::~NumberBoard()
{
    delete ui;
}

