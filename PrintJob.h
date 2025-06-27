#pragma once
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

// Класс, представляющий задание на печать
class PrintJob
{

private:
    string user;       // Имя пользователя, отправляющего задание
    int priority;      // Приоритет задания (большее число = больший приоритет)
    string startTime;       // Время, когда задание было отправлено
    string document;   // Название документа для печати
    int countTasks=0; //Счетчик заданий;
    
public:
    
    // Конструктор для инициализации задания на печать
    PrintJob(string user, int priority, string document) : user(user), priority(priority), document(document){
        // Получаем текущее время и форматируем его
        time_t now = time(0);
        char buffer[26]; // Буфер для хранения времени
        ctime_s(buffer, sizeof(buffer), &now); // Получаем  время
        startTime = buffer; // Сохраняем время
  
       
    }

    string getUser() const;
    int getPriority() const;
    string getTime() const;
    string getDocument() const;
    int getCountTask();

    void display() const;

    bool operator<(const PrintJob& other) const;
 
};

