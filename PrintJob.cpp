#include "PrintJob.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// ������� ��� ��������� ������

string PrintJob::getUser() const 
{ 
    return user; 
}

int PrintJob::getPriority() const 
{
    return priority; 
}
string PrintJob::getDocument() const
{
    return document;
}
string PrintJob::getTime() const 
{
    return startTime; 
}

int PrintJob::getCountTask() 
{
    return countTasks++;
}


void PrintJob::display() const {
    cout << "������������: " << user
        << "\n���������: " << priority
        << "\n��������: " << document
        << "\n�����: " << startTime;
}

// ���������� ��������� "������" ��� �������������� � ������������ �������
// ������� � ����� ������� ����������� ������ �������������� �������
bool PrintJob::operator<(const PrintJob& other) const 
{
    return priority < other.priority;
}
