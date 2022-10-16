#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    // new keyword
    float *breh = new float(40.8);
    cout<<"The value of a is "<<*(breh)<<endl;
    // for array
    int *arr = new int[4];
    arr[0] = 10; // *(arr) = 10
    arr[1] = 20; // *(arr+1) = 20
    arr[2] = 30;
    arr[3] = 40;// *(arr+2) = 30
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    //delete keyword
    delete arr;  // delete keyword -> deletes the contiguous block of memory that means the memory is free
    arr = new int(559);
    cout << "The value of new arr is " << *arr<<endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    delete[] arr; // to delete the entire contiguous block of memory
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    return 0;
}


