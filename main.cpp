#include <iostream>
#include "qapplication.h"
#include "Application/MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

	MainWindow mainWindow{nullptr};
    mainWindow.resize(640, 512);
    mainWindow.show();
    
    return QApplication::exec();
}