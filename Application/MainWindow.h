#pragma once
#include <qmainwindow.h>

QT_BEGIN_NAMESPACE
class QTextEdit;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow() = delete;
    MainWindow(QWidget* parent = nullptr);

private:
	
};