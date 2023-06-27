#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;  // The description of the task
    bool completed;           // Whether the task is completed or not
};

void TaskManager() {
    std::vector<Task> tasks;

    while (true) {
        std::cout << "\nTask Manager\n"
            << "1. Add Tasks\n"
            << "2. View Tasks\n"
            << "3. Mark or Unmark Task\n"
            << "4. Exit\n"
            << "\nEnter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1: {
            Task newTask;
            std::cout << "Enter task description: ";
            std::cin.ignore();
            std::getline(std::cin, newTask.description);
            newTask.completed = false;
            tasks.push_back(newTask);
            std::cout << "Task added\n";
            break;
        }
        case 2: {
            std::cout << "Task List:\n";
            for (const auto& task : tasks) {
                std::cout << "[" << (task.completed ? "X" : " ") << "] " << task.description << '\n';
            }
            break;
        }
        case 3: {
            std::cout << "Enter the index of the task to mark as completed: ";
            int index;
            std::cin >> index;
            if (index >= 0 && index < tasks.size()) {
                tasks[index].completed = !tasks[index].completed;
                std::cout << "Task marked as completed.\n";
            }
            else {
                std::cout << "Invalid index.\n";
            }
            break;
        }
        case 4: {
            std::cout << "Exiting the program.\n";
            return;
        }
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
}