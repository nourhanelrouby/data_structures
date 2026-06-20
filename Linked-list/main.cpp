#include <bits/stdc++.h>
using namespace std;
#include "Linkedlist.h"

int main() {

    LinkedList linkedList;

    // Insert in Front
    cout<<"Enter number of elements you want to store in front of linked list : \n";
    int size, element ,pos;
    cin>>size;
    for (int c=1;c<=size;c++) {
        cout<<"Enter Element Number " <<c<<endl;
        cin>>element;
        linkedList.insertFirst(element);
    }

    // Display
    linkedList.display();

    // Display Size
    if (linkedList.isEmpty()) cout<<"Empty List"<<endl;
    else cout<<"Linked List Size : "<< linkedList.linkedListSize() <<endl;

    // Search
    cout<<"Enter Element To Search For : \n";
    cin>>element;
    if (linkedList.isFound(element)) cout<<"Founded\n";
    else cout<<"Not Found\n";

    // Insert in specific position
    cout<<"Enter Element To Add Before Another One  : \n";
    cin>>element >>pos ;
    linkedList.insertBefore(element, pos);

    linkedList.display();

    // Append Element
    cout<<"Enter Element To Append : \n";
    cin>>element;
    linkedList.append(element);

    linkedList.display();

    cout<<"Enter Element to Delete : \n ";
    cin>>element;
    linkedList.deleteNode(element);

    linkedList.display();

    return 0;
}