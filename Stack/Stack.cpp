// Created by User on 6/21/2026.
//

#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    top = NULL;
}

bool Stack::isEmpty() {
    return top==NULL;
}

void Stack::push(int data) {
    Node* newnode = new Node();
    newnode->data = data;
    if (isEmpty()) {
        newnode->next = NULL;
    }else {
        newnode->next = top;
    }
    top = newnode;
}

void Stack::display() {
    if (isEmpty()) cout<<"Stack is Empty"<<endl;
    else {
        Node* temp = top;
        while (temp != NULL) {
            cout<<"Top -> "<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

int Stack::pop() {
    if (isEmpty()) {
        throw runtime_error("Stack is Empty");
    }

    Node* temp = top;
    int value = top->data;
    top= top->next;
    delete temp;
    return value;
}

int Stack::peek() {
    if (isEmpty()) {
        throw runtime_error("Stack is Empty");
    }
    return top->data;
}

int Stack::size() {
    Node* temp = top;
    int cnt=0;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool Stack::search(int data) {
    Node* temp = top;
    while (temp != NULL) {
        if (temp->data == data) return true;
        temp = temp->next;
    }
    return false;
}

Stack::~Stack() {
    while (!isEmpty()) pop();
}
