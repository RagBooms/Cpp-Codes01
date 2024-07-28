#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//structure to represent a task
struct Task {
    string description;
    bool completed;
    Task(string desc) : description(desc),completed(false){}
};
//Function to add a task to the to-do list
void addTask(vector<Task>& todoList, const string& description ){
    todoList.push_back(Task(description));
    cout<<"Task added :"<<description<<endl;
}
//Function to mark a task as completed
void completeTask(vector<Task>& todoList,int index){
    if(index>=0 && index <todoList.size()){
        todoList[index].completed =true;
        cout<<"Task Completed : "<<todoList[index].description<<endl;
    }
    else{
        cout<<"Invalid Task Index."<<endl;
    }
}
//Function to diplay the to-do list
void displayTodoList(const vector<Task>& todoList){
    cout<<"To-Do List:"<<endl;
    for(int i=0;i<todoList.size();++i){
        cout<<"["<<(todoList[i].completed ? "X" : " ")<< "]"<<i+1<<"."<< 
        todoList[i].description <<endl;
    }
}

int main(){
    vector<Task>todoList;
    //Menu Loop
    int choice;
    do{
        cout<<"\nMenu:\n";
        cout<<"1.Add Task\n";
        cout<<"2.Complete Task\n";
        cout<<"3.Display To-Do List\n";
        cout<<"4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:{
                string description ;
                cout<<"Enter task description :";
                cin.ignore();//clear newline character from input buffer
                getline(cin,description);
                addTask(todoList,description);
                break;
            }
            case 2:{
                int index;
                cout<<"Enter task index to mark as complete: ";
                cin>>index;
                completeTask(todoList,index - 1);//Adjust index to 0-based
                break;
            }
            case 3:{
                displayTodoList(todoList);
                break;
            }
            case 4:{
                cout<<"Exiting..."<<endl;
                break;
            }
            default:
            cout<<"INVALID CHOICE.Please try again."<<endl;
        }
    }while(choice!=4);
    
    return 0;
}