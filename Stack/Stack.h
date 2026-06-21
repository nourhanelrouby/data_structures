//
// Created by User on 6/21/2026.
//

#ifndef QUEUE_STACK_H
#define QUEUE_STACK_H
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    public:
    int size1=0;
    Node* top=NULL;

    Stack() ;
    bool isEmpty();
    void push(int data);
    void display();
    int pop();
    int peek();
    int size() ;
    bool search(int data);
   ~Stack();

};




#endif //QUEUE_STACK_H
