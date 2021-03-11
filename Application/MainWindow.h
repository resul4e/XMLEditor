#pragma once
#include "ui_MainWindow.h"
#include <qmainwindow.h>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow() = delete;
    MainWindow(QWidget* parent = nullptr);

private:
	
};