#ifndef GETNAMES_H
#define GETNAMES_H

#include <QDialog>
#include <QLineEdit>
#include <QLayout>

namespace Ui {
class getNames;
}

class getNames : public QDialog
{
    Q_OBJECT

public:
    explicit getNames(QWidget *parent = nullptr);
    ~getNames();

    QString string1() const { return m_string1; }
    QString string2() const { return m_string2; }
    QString string3() const { return m_string3; }

private slots:
    void on_NP1_editingFinished();

    void on_NP2_editingFinished();

    void on_NP3_editingFinished();

private:
    Ui::getNames *ui;
    QString m_string1;
    QString m_string2;
    QString m_string3;

    void accept() override
    {
        m_string1 = static_cast<QLineEdit*>(layout()->itemAt(1)->widget())->text();
        m_string2 = static_cast<QLineEdit*>(layout()->itemAt(3)->widget())->text();
        m_string3 = static_cast<QLineEdit*>(layout()->itemAt(5)->widget())->text();

        QDialog::accept();
    }

};

#endif // GETNAMES_H
