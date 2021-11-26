//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"
#include <utility>
#include <ctime>

using namespace std;

string Task::display() {
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\nCreation Time " + asctime(localtime(&timeCreate));
}

Task::Task(string n, string d, int dT) {
    name = std::move(n);
    description = std::move(d);
    dueTo = dT;
    time(&timeCreate);
}
