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
    int countTask; //Счетчик заданий
    static int totalTasks;

public:
    // Конструктор
    History(string userName, string doc) : userName(userName), documentName(doc)
    {
        totalTasks++;
        countTask = totalTasks;

    };
    // Метод для отображения записи в истории
    
    //инициализируем статистическую переменную
    static int initCounter() {
        totalTasks = 0;
        return 0;
    }

    static int getTotalTasks() {
        return totalTasks;
    }

    void display() 
    {
      
        cout <<"Задача: " << countTask << "\nПользователь: " << userName
            << "\nДокумент: " << documentName<<endl<<endl;
     
    }


   

    History() = default;
};

