#include<iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}
// *** In this program Values of x and y will not be  swapped ***
/* 
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"The value of x after swapping is "<<a<<" The value of y after swapping is "<<b<<endl;
}   
int main(){
    int x=4;
    int y=5;
    //cout<<"The sum of 4 and 5 is " <<sum(4,5);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    swap(x,y);
    cout<<"The value of x after swapping is "<<x<<" The value of y after swapping is "<<y<<endl; // values are not swapped
    return 0;
}*/
//*** In this program Values of x and y will  be  swapped ***
//           (CALL BY REFERENCE USING POINTERS)
void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"The value of x after swapping is "<<*a<<" The value of y after swapping is "<<*b<<endl;
}   
/*int main(){
    int x=4;
    int y=5;
    //cout<<"The sum of 4 and 5 is " <<sum(4,5);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl<<endl;
    swapPointer(&x,&y);
    cout<<"The value of x after swapping is "<<x<<" The value of y after swapping is "<<y<<endl; // values are not swapped
    return 0;
}*/
//           (Call by reference using C++ reference Variables )
// int & 
int & swapReferenceVar(int a, int b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    return a;
}


int main(){
    int & x =4;
    int & y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    swapReferenceVar(x, y) = 766; //function is returning a which is reference to x hence x value is altered
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
