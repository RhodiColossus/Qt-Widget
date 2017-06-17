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
    void two(QString str);



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
    void Inversia(QString str){
         \
        QString result=str;
        for( int i = str.size()-1, j = 0; i >= 0; i--,j++){
            result[j] = str[i];
        }
        QMessageBox msg;
        msg.setText(result);
        msg.exec();}

    void Uppered(QString str){
        for(int i =0;i<str.size();i++){
         str[i]=str.toUpper()[i];
        }

        QMessageBox msg;
        msg.setText(str);
        msg.exec();}

    void two_upin(QString str){
        QString s_date=str;
        for( int i = str.size()-1, j = 0; i >= 0; i--,j++){
            s_date[j] = str[i];}
        s_date=s_date.toUpper();

        QMessageBox msg;
        msg.setText(s_date);
        msg.exec();}




};


#endif // MYINWINDOW_H
