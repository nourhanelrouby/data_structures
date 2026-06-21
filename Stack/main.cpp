#include <iostream>

#include "Stack.h"
using namespace std;


int main() {
    int size,element;
    Stack stack;
    cout<<"Enter Number of elements you want to push in stack : "<<endl;
    cin>>size;
    for (int c=1;c<=size;c++) {
        cout<<"Enter element you want to push in stack :"<<c<<endl;
        cin>>element;
        stack.push(element);
    }

    stack.display();

    cout<<"Deleted element is "<<stack.pop()<<endl;

    stack.display();

    cout<<"Size of stack is "<<stack.size()<<endl;

    cout<<"Enter Element to search for : "<<endl;
    cin>>element;
    if (stack.search(element))cout<<"Element found : "<<element<<endl;
    else cout<<"Element not found"<<endl;

    cout<<"Stack Top : "<<stack.peek()<<endl;

    return 0;
}