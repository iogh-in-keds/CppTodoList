//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include <string>
#include "TaskStatus.h"
#include <chrono>
#include <ctime>

using namespace std;

class Task {
public:
    time_t timeCreate;
    string name;
    string description;
    time_t dueTo;
    TaskStatus status = ACTIVE;

    Task(string n, string d, int days, int h, int m, int s);

    string display();

    Task& operator+ (int a);
    Task& operator+= (int a);
};
std::ostream& operator<< (std::ostream& stream, Task task);

#endif //UNTITLED_TASK_H
