//
// Created by User on 6/16/2026.
//

#include "Linkedlist.h"

#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

void LinkedList::insertFirst(int data) {
    Node* newnode = new Node();
    newnode->data = data;
    if (isEmpty()) {
        head = newnode;
        newnode->next = NULL;
    }else {
        newnode->next = head;
        head = newnode;
    }
}

int LinkedList::linkedListSize() {
    int counter = 0;
    Node*temp = head;
    while (temp != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}

bool LinkedList::isFound(int data) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void LinkedList::append(int data) {
    if (isEmpty()) {
        insertFirst(data);
        return;
    }

    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    Node* temp= head;
    while(temp->next != NULL ) {
        temp = temp->next;
    }

    temp->next = newnode;
}

void LinkedList::insertBefore(int data, int pos) {

    if (isEmpty() || head->data == pos) {
        insertFirst(data);
        return;
    }
    if (isFound(pos)) {
        Node* newnode = new Node();
        newnode->data = data;

        Node* temp = head;
        while ( temp != NULL && temp->next->data != pos  ) {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }else {
        cout << "Pos Not Found\n";
    }
}

void LinkedList::display() {
    if (isEmpty()) cout<<"List is Empty"<<endl;
    else {
       Node* temp = head;
        while (temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

void LinkedList::deleteNode(int data) {

    if (! isFound(data)) {
        cout<<"Not Found \n";
    }
    Node*temp = head , *prev = NULL;

    if (isEmpty()) {
        cout<<"List is Empty"<<endl;
    }
    else if (temp->data == data) {
        head = head->next;
        delete temp;
    }
    else {
        while (temp->data != data) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;
    }
}

LinkedList::~LinkedList() {
    Node * temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}