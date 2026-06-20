//
// Created by User on 6/16/2026.
//

#ifndef DATA_STRUCTURES_LINKEDLIST_H
#define DATA_STRUCTURES_LINKEDLIST_H

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList();
    bool isEmpty();
    void insertFirst(int data);
    void append(int data);
    void insertBefore(int data, int pos);
    void display();
    int linkedListSize();
    bool isFound(int data);
    void deleteNode(int data);
    ~LinkedList();
};

#endif //DATA_STRUCTURES_LINKEDLIST_H
