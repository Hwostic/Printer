#pragma once
#include "Printer.h"
#include "PrintJob.h"
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;


//Класс, хранящий информацию о пользователях и их документах

class History
{
private:
    string userName;           // Имя пользователя
    string documentName;   // Название документа


public:
    // Конструктор
    History(string userName, string doc) : userName(userName), documentName(doc) {};
    // Метод для отображения записи в истории
    void display() 
    {
        cout << "Пользователь: " << userName
            << "\nДокумент: " << documentName<<endl;
    }



};

