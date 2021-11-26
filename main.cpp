#include <iostream>
#include "TodoList.h"

int main() {
    TodoList list;
    Task testTask("TEST NAME", "TEST DESCRIPTION", 0);

    list.addTask(testTask);
    list.completeTask(testTask);
//    if(!list.addTask(testTask))
//    {
//        cout << "WAS UNABLE TO ADD NEW TASK: " + testTask.display();
//    }

    auto resultList = list.resolvedTasks();

    for (auto resultTask: resultList) {
        cout << resultTask.display();
    }
    return 0;
}
