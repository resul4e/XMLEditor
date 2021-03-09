#include <iostream>
#include "qapplication.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
	
    std::cout << "Hello World" << "\n";

    return 0;
}