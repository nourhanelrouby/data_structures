//
// Created by User on 6/12/2026.
//

#include "Array.h"
using namespace std;
#include <bits/stdc++.h>

Array::Array(int sz): size(sz) {
    length =0;
    arr = new int[size];
}

int Array::getLength() {
    return length;
}

int Array::getSize() {
    return size;
}

void Array::Fill() {
    cout<<"How Many Elements You Want To Fill : "<<endl;
    int arr_size;
    cin>>arr_size;
    if (arr_size>size) {
        cout<<"Invalid Size Try Less Than Or Equal "<<size<<endl;
        return;
    }
    for (int c=0 ;c<arr_size ;c++) {
        cout<<"Enter Number indexed "<<c+1<<endl;
        cin>>arr[c];
        length++;
    }
    cout<<endl;
}

void Array::Print() {
    if (isEmpty()) {
        cout<<"Array is Empty"<<endl;
        return;
    }
    cout<<"Array is : "<<endl;
    for (int c=0;c<length;c++) {
        cout<<arr[c]<<" ";
    }
    cout<<endl;
}

bool Array::isEmpty() {
    if (length==0) return true;
    return false;
}

int Array::search(int item) {
    for (int c=0;c<length;c++) {
        if (item==arr[c]) {
            return c;
        }
    }
    return -1;
}

void Array::append(int i) {

    if (length<size) {
        arr[length] = i;
        length++;
    }else {
        cout<<"Array Overflow \n"<<endl;
    }
}

void Array::Insert(int i, int p) {
    if (p >= 0 && p <= length && length < size) {

        // Shift Elements To Right
        for (int c= length ;c>p ;c--) {
            arr[c] = arr[c-1];
        }

        arr[p] =i;
        length++;
    }else {
        cout<<"Array Overflow \n"<<endl;
    }
}

void Array::Delete(int p) {
    if (p>=0 && p<length) {

        // Shift Elements To Left
        for (int c=p ;c<length-1;c++) {
            arr[c]=arr [c+1];
        }
        length--;
    }else {
        cout<<"Invalid Delete \n";
    }
}

void Array::EnLarge(int n_s) {
    if (n_s<=size) {
        cout<<"Enter Large Size More Than "<<size<<endl;
        return;
    }

    size = n_s;
    int* temp = arr;
    arr = new int [size];

    for (int c=0 ;c<length;c++) arr[c] = temp[c];

    delete[] temp;
}

int Array::Get(int i) {
    return arr[i];
}

void Array::Merge(Array array2) {
    int new_size = size + array2.getSize();
    int* temp = arr;
    arr = new int [new_size];
    for (int c=0;c<length;c++) arr[c] = temp[c];
    for (int c=0 ;c<array2.getLength();c++) {
        arr[length] = array2.Get(c);
        length++;
    }
    delete[] temp;
}

Array::~Array() {
    delete [] arr;
}