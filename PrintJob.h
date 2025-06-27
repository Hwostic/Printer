#pragma once
#include <queue>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

// �����, �������������� ������� �� ������
class PrintJob
{

private:
    string user;       // ��� ������������, ������������� �������
    int priority;      // ��������� ������� (������� ����� = ������� ���������)
    string startTime;       // �����, ����� ������� ���� ����������
    string document;   // �������� ��������� ��� ������
    int countTasks=0; //������� �������;
    
public:
    
    // ����������� ��� ������������� ������� �� ������
    PrintJob(string user, int priority, string document) : user(user), priority(priority), document(document){
        // �������� ������� ����� � ����������� ���
        time_t now = time(0);
        char buffer[26]; // ����� ��� �������� �������
        ctime_s(buffer, sizeof(buffer), &now); // ��������  �����
        startTime = buffer; // ��������� �����
  
       
    }

    string getUser() const;
    int getPriority() const;
    string getTime() const;
    string getDocument() const;
    int getCountTask();

    void display() const;

    bool operator<(const PrintJob& other) const;
 
};

