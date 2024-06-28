#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool isCompleted;
};

vector<Task> taskList;

void addTask() {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore(); // Add this line to ignore any characters in the input buffer
    getline(cin, newTask.description);
    newTask.isCompleted = false;
    taskList.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

void viewTasks() {
    cout << "Task List:" << endl;
    for (int i = 0; i < taskList.size(); i++) {
        cout << "[" << (i + 1) << "] " << taskList[i].description;
        if (taskList[i].isCompleted) {
            cout << " (Completed)" << endl;
        } else {
            cout << " (Pending)" << endl;
        }
    }
}

void markTaskAsCompleted() {
    int taskNumber;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList[taskNumber - 1].isCompleted = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

void removeTask() {
    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList.erase(taskList.begin() + taskNumber - 1);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskAsCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    }
    return 0;
}