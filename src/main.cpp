#include "TaskManager.h"

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        std::cout << "\n--- Task Manager ---\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. List Tasks\n";
        std::cout << "3. Complete Task\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        std::cin.ignore(); 

        if (choice == 1) {
            std::string title;
            std::cout << "Enter task title: ";
            std::getline(std::cin, title);
            manager.addTask(title);

        } else if (choice == 2) {
            manager.listTasks();

        } else if (choice == 3) {
            int index;
            std::cout << "Enter task number to complete: ";
            std::cin >> index;
            manager.completeTask(index);

        } else if (choice == 4) {
            std::cout << "Exiting...\n";
            break;

        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}
