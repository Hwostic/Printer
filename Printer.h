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
    priority_queue<PrintJob> printQueue; // ������������ ������� ��� ������� �� ������
    queue<History> statistic;   // ������� ��� �������� ���������� ������
  
public:
    
    void addJob(const PrintJob& print);    // ����� ��� ���������� ������� � �������

    void printNext();  // ����� ��� ������ ���������� �������

    void displayStatistics() const;     // ����� ��� ����������� ���������� ������
        

};

