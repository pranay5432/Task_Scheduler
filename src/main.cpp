#include <iostream>
using namespace std;
int showCreateTaskMenu() {
    system("clear");
    cout << "Create Task Menu." << endl;
    cout << "2. Back" << endl;
    int input;
    cin >> input;
    return 0;
}
int editTaskMenu() {
    system("clear");
    cout << "Edit Task Menu." << endl;
    cout << "2. Back" << endl;
    int input;
    cin >> input;
    return 0;
}
int deleteTaskMenu() {
    system("clear");
    cout << "Delete Task Menu." << endl;
    cout << "2. Back" << endl;
    int input;
    cin >> input;
    return 0;
}
int viewSchedule() {
    system("clear");
    cout << "View Schedule." << endl;
    cout << "2. Back" << endl;
    int input;
    cin >> input;
    return 0;
}

int showMainMenu() {
    while(true) {
        system("clear");
        cout <<"Main Menu"<<endl;
        cout <<"Select option"<<endl;
        cout <<"1. Create Task"<<endl;
        cout <<"2. Edit Task"<<endl;
        cout <<"3. Delete Task"<<endl;
        cout <<"4. View Schedule"<<endl;
        cout <<"5. Exit"<<endl;
        
        int input;
        cin >> input;
        switch (input){
            case 1:
            //Show create task menu.
            showCreateTaskMenu();
            break;

            case 2:
            //Edit task menu.
            editTaskMenu();
            break;

            case 3:
            //Show delete task menu.
            deleteTaskMenu();
            break;

            case 4:
            //View schedule.
            viewSchedule();
            break;

            case 5:

            return 0;

            break;

        }
    }
    return 0;
}

int main() {
    int ret = showMainMenu();
    return 0;
}


