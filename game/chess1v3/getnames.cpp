#include "getnames.h"
#include "ui_getnames.h"

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

void getNames::on_NP1_editingFinished()
{
    m_string1 = ui->NP1->displayText();
}


void getNames::on_NP2_editingFinished()
{
    m_string2 = ui->NP2->displayText();
}


void getNames::on_NP3_editingFinished()
{
    m_string3 = ui->NP3->displayText();
}

