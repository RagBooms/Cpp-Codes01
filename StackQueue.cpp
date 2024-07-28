#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void stackDemo()
{
    stack<int> myStack;
    // Pushing the elements in the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    // Printing elements in the stack
    cout << "Stack elements: ";
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}

void queueDemo()
{
    queue<int> myQueue;
    // Enqueue elements in the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    // Printing elements in the queue
    cout << "Queue Elements: ";
    while (!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;
}

int main()
{
    cout << "Stack Example: " << endl;
    stackDemo();
    cout << "Queue Example: " << endl;
    queueDemo();

    return 0;
}