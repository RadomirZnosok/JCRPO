#include "getnames.h"
#include "ui_getnames.h"
#include <QPushButton>

getNames::getNames(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getNames)
{
    ui->setupUi(this);

}

getNames::~getNames()
{
    delete ui;
}



