# include <myinwindow.h>

myinwindow::myinwindow (QWidget *parent) : QDialog(parent){
    lbl = new QLabel("&Enter");
    line= new QLineEdit;
    lbl->setBuddy(line);
     
    cb1=new QCheckBox("Upper Registr");//chekers
    cb2=new QCheckBox("Inversion");
    ok= new QPushButton("ok");
    ok->setDefault(true);
    ok->setEnabled(false);
    close = new QPushButton("Close");

    QHBoxLayout * layout =new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    QVBoxLayout *right = new QVBoxLayout;
    right->addLayout(layout);
    right->addWidget(cb1);
    right->addWidget(cb2);

    QVBoxLayout * left = new QVBoxLayout;
    left->addWidget(ok);
    left->addWidget(close);

    QHBoxLayout * main_layout = new QHBoxLayout;
    main_layout->addLayout(right);
    main_layout->addLayout(left);

    connect(line,SIGNAL(textChanged(QString)),this,SLOT(TextChanged(QString)));
    connect(close,SIGNAL(clicked()),this,SLOT(close()));
    setLayout(main_layout);
    setWindowTitle("Qt-Widget");
}
   void myinwindow:: TextChanged(QString str){
        ok->setEnabled(!str.isEmpty());
    }

    void myinwindow::OkClicked(){



    }
    
























