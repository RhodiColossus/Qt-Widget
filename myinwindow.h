#ifndef MYINWINDOW_H
#define MYINWINDOW_H
#include <QDialog>
#include <QLabel>
#include<QLineEdit>
#include<QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

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



};





#endif // MYINWINDOW_H
