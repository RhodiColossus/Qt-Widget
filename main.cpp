#include "myinwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    myinwindow * window = new myinwindow;

    window->show();
    str *n = new str;

     QObject::connect(window,SIGNAL(Simple(QString)),n,SLOT(Simple(QString)));





















   /*  MainWindow w;
    w.show();
    QSpinBox *sp= new QSpinBox;
    sp->setMaximum(100);
    QSlider *sl =new QSlider(Qt::Horizontal);
    sl->setMaximum(100);

    QWidget *window = new QWidget;
    QHBoxLayout *qb= new QHBoxLayout;
    qb->addWidget(sp);
    qb->addWidget(sl);
     window->setLayout(qb);

     window->show();
     QObject::connect(sl,SIGNAL(valueChanged(int)),sp,SLOT(setValue(int)));*/










    return a.exec();
}
