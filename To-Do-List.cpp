#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Struct representing task
struct Task{
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

// Logic for adding the task
void addTask(vector<Task> & todoList, const string& description){
    todoList.push_back(Task(description));
    cout<<"Task added: "<<description<<endl;
}

// Marking for completion
void completeTask(vector<Task>& todoList, int index){
    if(index>=0 && index < todoList.size()){
        todoList[index].completed=true;
        cout<<"Task Completed: "<<todoList[index].description<<endl;
    }
    else{
        cout<<"Invalid task index"<<endl;
    }
}

// Displaying the tasks
void displayTodoList(const vector<Task>&todoList){
    cout<<"To-Do List: "<<endl;
    for(int i=0; i<todoList.size();i++){
        cout<<"["<< (todoList[i].completed?"X":" ")<<"]"<<i+1<<". "<<todoList[i].description<<endl;
    }
}

int main(){
    vector<Task> todoList;
    int choice;
    do{
        cout<<"\nMenu:\n";
        cout<<"\n1. Add Task\n";
        cout<<"\n2. Complete Task\n";
        cout<<"\n3. Display To-Do List\n";
        cout<<"\n4. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
                string description;
                cout<<"Enter task description: ";
                cin.ignore();
                getline(cin, description);
                addTask(todoList, description);
                break;
            }
            case 2:{
                int index;
                cout<<"Enter task index to mark as completed: ";
                cin>>index;
                completeTask(todoList, index-1);
                break;
            }
            case 3:{
                displayTodoList(todoList);
                break;
            }
            case 4:{
                cout<<"Exiting...."<<endl;
                break;
            }
            default:
            cout<<"Invalid choice. Please try Again."<<endl;
        }
    }while(choice!=4);
    return 0;
}