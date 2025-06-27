#include "PrintJob.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// Геттеры для свойств задания
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




void PrintJob::display() const {
    cout << "Пользователь: " << user
        << "\nПриоритет: " << priority
        << "\nДокумент: " << document
        << "\nВремя: " << startTime;
}

// Перегрузка оператора "меньше" для упорядочивания в приоритетной очереди
// Задания с более высоким приоритетом должны обрабатываться первыми
bool PrintJob::operator<(const PrintJob& other) const 
{
    return priority < other.priority;
}
