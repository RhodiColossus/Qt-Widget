#ifndef MYINWINDOW_H
#define MYINWINDOW_H
#include <QDialog>
#include <QLabel>
#include<QLineEdit>
#include<QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

class myinwindow : public QDialog {

    Q_OBJECT

public:
    myinwindow(QWidget *parent =0);
    private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *ok;
    QPushButton * close;

    private slots :

    void OkClicked();
    void TextChanged(QString str);

signals:
    void upper_Register(QString str);
    void invers(QString str);
    void Simple(QString str);



};

class str: public QObject
{
    Q_OBJECT

public slots:
    void Simple(QString str)
    {
        QMessageBox msg;
        msg.setText(str);
        msg.exec();
    }


};


#endif // MYINWINDOW_H
