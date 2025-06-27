#include "Printer.h"
#include "PrintJob.h"
#include "History.h"
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

    int History::totalTasks = History::initCounter();

    // Метод для добавления задания в очередь
   void Printer::addJob(const PrintJob& print)
    {
        printQueue.push(print);
    }

  
    // Метод для печати следующего задания
    void Printer::printNext() 
    {
        if (!printQueue.empty()) {
            PrintJob nextJob = printQueue.top(); // Получаем задание с наивысшим приоритетом
            printQueue.pop();                     // Удаляем его из очереди
            // Добавляем запись в статистику
           History history(nextJob.getUser(), nextJob.getDocument());
           statistic.push(history);
            // Отображаем информацию о выполненном задании
            cout << "Печать задания: " <<endl;
            nextJob.display();
            cout << endl;
        }
        else {
            cout << "Очередь печати пуста." << endl;
        }
    }


     //Метод для отображения статистики печати
    void Printer::displayStatistics() const 
    {
        cout << "Статистика печати:" << endl;
        queue<History> temp = statistic; // Копируем очередь для отображения
        while (!temp.empty()) {
            temp.front().display();
            temp.pop();
        }
        History count;
        cout << "Общее количество задач: " << count.getTotalTasks() <<endl;
        

    }

