#include<iostream>
#include<iomanip>
using namespace std;

int main(){
//  int a = 3 , b = 42 , c = 9906;
//  cout<<"Print without setw a : "<<a<<endl;
//  cout<<"Print without setw b : "<<b<<endl;
//  cout<<"Print without setw c : "<<c<<endl;
//setw is used to know  how much space shall be provided for the value
//  cout<<"Print with setw a : "<<setw(4)<<a<<endl;
//  cout<<"Print with setw b : "<<setw(4)<<b<<endl;
//  cout<<"Print with setw c : "<<setw(4)<<c<<endl;
    //operator precdence
    int a =3, b = 4;
    int c = ((((a*5)+b)-20)+10);
    cout<<"The sum is :"<<c<<endl;
    return 0;
}
