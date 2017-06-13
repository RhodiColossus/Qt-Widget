# include <myinwindow.h>

Myinwindow::Myinwindow (QWidget *parent) : QDialog(parent){
    Q_PROPERTY(type name READ name WRITE setName NOTIFY nameChanged)


}
