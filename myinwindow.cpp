# include <myinwindow.h>

myinwindow::myinwindow (QWidget *parent) : QDialog(parent){
    lbl = new QLabel("Enter");
    line= new QLineEdit;
     
    cb1=new QCheckBox("Upper Registr");//chekers
    cb2=new QCheckBox("Inversion");
    ok= new QPushButton("ok");
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

    setLayout(main_layout);






    
}
