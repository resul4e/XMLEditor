#include <iostream>
#include "qapplication.h"
#include <qpushbutton.h>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
	
    QPushButton button("Hello world!");
    button.show();

    return QApplication::exec();
}