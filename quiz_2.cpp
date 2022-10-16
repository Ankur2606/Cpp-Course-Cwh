#include<iostream>
using namespace std;

int main(){
    int marks[8];
    int i = 0 ;  //initialization
    for ( int m = 0; m < 4; m++)
    {
        cout<<"Enter the marks for student "<<m<<endl;
        cin>>marks[m];
    }
    while (i<4)
    {
        cout<<"The marks for student "<<i<<" are "<<marks[i]<<endl;
        i++;
    }
    cout<<"skip krdisss";
    // i = 0;











    //do
    //{
    //    cout<<"The marks for student "<<i<<" are "<<marks[i]<<endl;
    //    i++;
    //} while (i<4);
    //
    return 0;
}