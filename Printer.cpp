#include "Printer.h"
#include "PrintJob.h"
#include "History.h"
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

    int History::totalTasks = History::initCounter();

    // ����� ��� ���������� ������� � �������
   void Printer::addJob(const PrintJob& print)
    {
        printQueue.push(print);
    }

  
    // ����� ��� ������ ���������� �������
    void Printer::printNext() 
    {
        if (!printQueue.empty()) {
            PrintJob nextJob = printQueue.top(); // �������� ������� � ��������� �����������
            printQueue.pop();                     // ������� ��� �� �������
            // ��������� ������ � ����������
           History history(nextJob.getUser(), nextJob.getDocument());
           statistic.push(history);
            // ���������� ���������� � ����������� �������
            cout << "������ �������: " <<endl;
            nextJob.display();
            cout << endl;
        }
        else {
            cout << "������� ������ �����." << endl;
        }
    }


     //����� ��� ����������� ���������� ������
    void Printer::displayStatistics() const 
    {
        cout << "���������� ������:" << endl;
        queue<History> temp = statistic; // �������� ������� ��� �����������
        while (!temp.empty()) {
            temp.front().display();
            temp.pop();
        }
        History count;
        cout << "����� ���������� �����: " << count.getTotalTasks() <<endl;
        

    }

