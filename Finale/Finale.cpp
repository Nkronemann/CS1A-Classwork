#include<iostream>
#include<fstream>

using namespace std;
//---------------------------------------------------//
void Menu(){
    // welcome message
    cout << "Welcome to the Basic To-Do List Manager!\n";
    //first 3
    cout << "1. Add Task\n" << "2. Display Tasks\n" << "3. Remove Task\n";
    //finale 4
    cout << "4. Mark Task as Complete\n" << "5. Save to File\n" << "6. Load from File\n" << "7. Exit\n";
    cout << endl << "Please Input the number corresponding to what action you would like to take\n";
}
//---------------------------------------------------//
string AddTask (string ToDoArray[], int taskcount) {
        cout << "Please input the name of a task you would like to add.\n";
        cin.ignore();
        getline(cin, ToDoArray[taskcount]);
        cout << "Task has been added.\n";
    return ToDoArray[taskcount];
    }
//---------------------------------------------------//
void DisplayTask (string ToDoArray[], int taskcount) {
    cout << "To-Do list:\n";
    for (int i = 0; i < taskcount; i++) {
        cout << i + 1 << ". " << ToDoArray[i] << endl;
    }
}
//---------------------------------------------------//
string RemoveTask (string ToDoArray[]) {
    int numselection = 0;
    cout << "Please choose the number of a task to remove.\n";
    cin >> numselection;
    ToDoArray[numselection--] = " ";
    return ToDoArray[numselection];
}
//---------------------------------------------------//
void CompleteTask (string CompletedTasks, int taskcount) {

}
//---------------------------------------------------//
void SaveToFile (string ToDoArray[], int taskcount) {
    ofstream output("Save.txt");

for (int i = 0; i < 100; i++) {
    output << ToDoArray[i] << endl;
}
}
//---------------------------------------------------//

//---------------------------------------------------//

//---------------------------------------------------//
int main(){
    //int stuff
    int choice = 0;
    int TaskCount = 0;
    string ToDoList[100];
    //end int//

    //String Array Setup//
        for (int i = 0; i < 100; i++){
        ToDoList[i] = " ";
        }
    //End String Array Setup//

    //start programs//
    while (choice != 7) {
        Menu();
        cin >> choice;
        switch (choice) {
            case 1:
                ToDoList[TaskCount] = AddTask(ToDoList, TaskCount);
                TaskCount++;
                break;
            case 2:
                DisplayTask(ToDoList, TaskCount);
                break;
            case 3:
                RemoveTask (ToDoList);
                TaskCount--;
                break;
            case 4:
                break;
            case 5:
                SaveToFile(ToDoList, TaskCount);
                break;
            case 6:
            //---------------------------//Clean out Array
                for (int i = 0; i < 100; i++){
                    ToDoList[i] = " ";
                }
            //---------------------------// Then actually start
                ifstream input("Finale.cpp");
                for (int i = 0; i < 100; i++) {
                    getline(input, )
                }
                break;
            case 7:
            cout << "Ending Program.\n";
        }
    }
    return 0;
}
//---------------------------------------------------//