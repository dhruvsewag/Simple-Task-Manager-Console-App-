#include "TaskManager.h"

void TaskManager::addTask(const std::string& title) {
    tasks.push_back({title, false});
    std::cout << "Task added successfully.\n";
}

void TaskManager::listTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
        return;
    }

    std::cout << "\n--- Task List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << tasks[i].title 
                  << " [" << (tasks[i].completed ? "Done" : "Pending") << "]\n";
    }
}

void TaskManager::completeTask(int index) {
    if (index < 1 || index > (int)tasks.size()) {
        std::cout << "Invalid task number.\n";
        return;
    }

    tasks[index - 1].completed = true;
    std::cout << "Task marked as completed.\n";
}
