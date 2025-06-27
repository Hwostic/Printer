#pragma once
#include "History.h"
#include "PrintJob.h"
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

class Printer
{

private:
    priority_queue<PrintJob> printQueue; // ѕриоритетна€ очередь дл€ заданий на печать
    queue<History> statistic;   // ќчередь дл€ хранени€ статистики печати
  
public:
    
    void addJob(const PrintJob& print);    // ћетод дл€ добавлени€ задани€ в очередь

    void printNext();  // ћетод дл€ печати следующего задани€

    void displayStatistics() const;     // ћетод дл€ отображени€ статистики печати
        

};

