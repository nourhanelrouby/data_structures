//
// Created by User on 6/12/2026.
//

#ifndef OOP_ARRAY_H
#define OOP_ARRAY_H



class Array {
private:

    int size;
    int *arr;
    int length;

public:

    Array(int sz); //
    int getLength();
    int getSize();
    void Fill();
    void Print();
    bool isEmpty();
    int search(int item);
    void append(int item);
    void Insert(int item, int pos);
    void Delete(int pos);
    void EnLarge(int new_size);
    void Merge(Array arr);
    int Get(int i);
    ~Array();
};



#endif //OOP_ARRAY_H
