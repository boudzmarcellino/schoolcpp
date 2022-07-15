//#include "QtCore/Qcore"
//#include <QtCore/QCoreApplication>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include "interface.hpp"
int main(int argc , char ** argv)
{
    QApplication app(argc, argv);
    Interface window;
    window.show();
    return app.exec();   
}