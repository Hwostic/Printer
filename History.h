#pragma once
#include "Printer.h"
#include "PrintJob.h"
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;


//�����, �������� ���������� � ������������� � �� ����������

class History
{
private:
    string userName;           // ��� ������������
    string documentName;   // �������� ���������
    int countTask; //������� �������
    static int totalTasks;

public:
    // �����������
    History(string userName, string doc) : userName(userName), documentName(doc)
    {
        totalTasks++;
        countTask = totalTasks;

    };
    // ����� ��� ����������� ������ � �������
    
    //�������������� �������������� ����������
    static int initCounter() {
        totalTasks = 0;
        return 0;
    }

    static int getTotalTasks() {
        return totalTasks;
    }

    void display() 
    {
      
        cout <<"������: " << countTask << "\n������������: " << userName
            << "\n��������: " << documentName<<endl<<endl;
     
    }


   

    History() = default;
};

