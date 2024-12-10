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
void DisplayTask (string ToDoArray[], string CompletedTasks[], int taskcount) {
    cout << "To-Do list:\n";
    for (int i = 0; i < taskcount; i++) {
        cout << i + 1 << ". " << ToDoArray[i];
        if (CompletedTasks[i] != "N") {
            cout << "{Completed}" << endl;
        } else {
            cout << endl;
        }
    }
}
//---------------------------------------------------//
string RemoveTask (string ToDoArray[], int numselection) {
    ToDoArray[numselection - 1] = " ";
    return ToDoArray[numselection];
}
string RemoveComplete (string CompletedTasks[], int numselection) {
    CompletedTasks[numselection - 1] = " ";
    return CompletedTasks[numselection];
}
//---------------------------------------------------//
void CompleteTask (string ToDoArray[], string CompletedTasks[], int taskcount) {
    //---------------------------// int stuff
    int TaskToComplete;
    //---------------------------// display what program needs to be remove
    for (int i = 0; i < taskcount; i++) {
        cout << i + 1 << ". " << ToDoArray[i] << endl;
    }
    //---------------------------// actually remove stuff now
    cout << "Please select the task you would like to have be marked as complete:\n";
    cin >> TaskToComplete;
    if (CompletedTasks[TaskToComplete--]!="C") {
    CompletedTasks[TaskToComplete--] = "C";
    } else {
        cout << "This task has already been completed please try again!\n" << endl << endl;
    }
}
//---------------------------------------------------//
void SaveToFile (string ToDoArray[], string CompleteTask[], int taskcount) {
    ofstream output("Save.txt");

    for (int i = 0; i < 100; i++) {
        output << ToDoArray[i] << endl;
            if (CompleteTask[i]!="N") {
                output << CompleteTask[i] << endl;
            } else if (ToDoArray[i]!=" ") {
                output << "N" << endl;
            }
            
    }

}
//---------------------------------------------------//

//---------------------------------------------------//
int main(){
    //int stuff
    ifstream inputfile("Save.txt");
    int count = 100;
    int choice = 0;
    int secchoice = 0;
    int TaskCount = 0;
    string ToDoList[100];
    string CompleteList[100];
    string inputext;
    //end int//

    //String Array Setup//
        for (int i = 0; i < 100; i++){
        ToDoList[i] = " ";
        }
        for (int i = 0; i < 100; i++){
        CompleteList[i] = "N";
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
                DisplayTask(ToDoList, CompleteList, TaskCount);
                break;
            case 3:
                cout << "Please choose the number of a task to remove.\n";
                cin >> secchoice;
                RemoveTask (ToDoList, secchoice);
                RemoveComplete (CompleteList, secchoice);
                TaskCount--;

            //Cleaning up empty spaces program//

            ToDoList[secchoice - 1] = ToDoList[secchoice];
            CompleteList[secchoice - 1] = CompleteList[secchoice];
            ToDoList[secchoice] = " ";
            CompleteList[secchoice] = " ";

                break;
            case 4:
                CompleteTask(ToDoList,CompleteList, TaskCount);
                break;
            case 5:
                cout << "SAVED!" << endl;
                SaveToFile(ToDoList, CompleteList, TaskCount);
                break;
            case 6:
            //---------------------------//Clean out Array
                for (int i = 0; i < 100; i++){
                    ToDoList[i] = " ";
                }
            //---------------------------// Then actually start
                while (inputfile >> inputext and TaskCount < 100) {
                    if (inputext != "N" and inputext != "C") {
                        ToDoList[TaskCount++]=inputext;
                    }
                }
                while (inputfile >> inputext and count < 100) {
                    if (inputext == "N" or inputext == "C") {
                        CompleteList[count++]=inputext;
                    }
                }
                break;
            case 7:
            cout << "Ending Program.\n";
        }
    }
    return 0;
}
//---------------------------------------------------//