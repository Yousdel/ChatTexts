#include <QCoreApplication>
#include "concreteconsolechattexts.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IChatTexts *chatTexts = new ConcreteConsoleChatTexts();
    cout<< chatTexts->addText("Yousdel: ooooooo").toStdString();
    cout << "segundo paso \n";
    cout<< chatTexts->addText("Yoel: iiiiiiiiiiiiiii",1).toStdString();
    cout << "tercer paso \n";
    cout<< chatTexts->quitNewMsgsMark().toStdString();
    cout << "4to paso \n";
    cout << chatTexts->addText("yousdel: hihggiuiu",1).toStdString();
    cout << "5to paso \n";
    cout << chatTexts->addText("yoel: pppppp",1).toStdString();
    cout << "6to paso \n";
    cout << chatTexts->quitNewMsgsMark().toStdString();
    delete  chatTexts;
    return a.exec();
}
