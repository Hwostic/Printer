
#include "PrintJob.h"
#include "Printer.h"
#include <iostream>
#include <queue>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    Printer printer; 

    // Добавляем задания на печать
    printer.addJob(PrintJob("Мария", 2, "Документ1.pdf"));
    printer.addJob(PrintJob("Иван", 1, "Документ2.docx"));
    printer.addJob(PrintJob("Андрей", 3, "Документ3.txt"));

    // Печатаем задания
    printer.printNext();
    printer.printNext();
    printer.printNext();
    printer.printNext(); 
    
    // Попытка напечатать, когда очередь пуста
    // Отображаем статистику печати

   printer.displayStatistics();
    return 0;

}

