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


public:
    // �����������
    History(string userName, string doc) : userName(userName), documentName(doc) {};
    // ����� ��� ����������� ������ � �������
    void display() 
    {
        cout << "������������: " << userName
            << "\n��������: " << documentName<<endl;
    }



};

