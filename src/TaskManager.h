#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string title;
    bool completed = false;
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& title);
    void listTasks() const;
    void completeTask(int index);
};

#endif
