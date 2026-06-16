#include <bits/stdc++.h>
using namespace std;
#include "array.h"
int main() {

    cout<<"Welcome To Demo \n";
    int array_size, element, pos;

    // MAke Array With Size
    cout<<"Enter Array Size: \n";
    cin>>array_size;
    Array arr(array_size);

    // Fill Array with specific length
    arr.Fill();

    // Display Array Elements
    arr.Print();
    cout<<"Array Length : "<<arr.getLength()<<endl;
    cout<<"Array Size : "<<arr.getSize()<<endl;

    cout<<"Enter Element To Search For : "<<endl;
    cin>>element;

    // Apply Search
    int res = arr.search(element);
    if (res!=-1)cout<<res<<endl;
    else cout<<"Element not found \n"<<endl;

    // Add Element to array end
    cout<<"Enter Element To Append \n";
    cin>>element;
    arr.append(element);

    arr.Print();

    // Add Element to specific position
    cout<<"Enter Element & Position \n";
    cin>>element>>pos;
    arr.Insert(element , pos);
    arr.Print();

    // Delete Element
    cout<<"Enter Element to be Deleted \n";
    cin>>element;
    arr.Delete(pos);
    arr.Print();

    // Resize Array
    cout<<"Enter New Size \n";
    cin>>array_size;
    arr.EnLarge(array_size);

    arr.Print();
    cout<<"Array Length : "<<arr.getLength()<<endl;
    cout<<"Array Size : "<<arr.getSize()<<endl;

    // Merge two arrays
    Array arr2(5);
    arr2.Fill();
    arr.Merge(arr2);
    cout<<"Array Length : "<<arr.getLength()<<endl;
    cout<<"Array Size : "<<arr.getSize()<<endl;
    arr.Print();
}