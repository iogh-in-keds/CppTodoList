//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"
#include <utility>
#include <ctime>
#include <iostream>

using namespace std;

string Task::display() {
    string a = asctime(localtime(&dueTo));
    string b = asctime(localtime(&timeCreate));
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + a +
           "TaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\nCreation Time: " + b;
}

Task::Task(string n, string d, int days, int h, int m, int s) {
    name = std::move(n);
    description = std::move(d);
    time(&timeCreate);
    dueTo = timeCreate - timeCreate % 86400 + days * 86400 + (h - 3) * 3600 + m * 60 + s;

}

Task &Task::operator+(int a) {
    dueTo += a * 86400;
    return *this;
}

Task &Task::operator+=(int a) {
    dueTo += a * 86400;
    return *this;
}

std::ostream &operator<<(ostream &stream, Task task) {
    stream << task.display();
    return stream;
}
