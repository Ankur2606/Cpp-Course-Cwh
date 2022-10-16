
#include<iostream>
using namespace std;

void func(int j){
    for (int i = 1; i <=j; i++)
    {
        cout<<"*";
    }
}

int main(){
    int a,b,m;
    cout<<"Enter 0 for reverse star pattern \nEnter 1 for star pattern\n";
    cin>>m;
    if (m==0)
    {
        cout<<"You chose reverse star patter\n";
        cout<<"Enter the no of rows"<<endl;
        cin>>b;
        for (a = b ; a+b> b; a--)
    {
        func(a);
        cout<<endl;
    }
    }
    else if (m==1)
    {
        cout<<"You chose star patter\n";
        cout<<"Enter the no of rows"<<endl;
        cin>>b;
        for (a = 1 ; a<=b; a++)
    {
        func(a);
        cout<<endl;
    }
    }
    else
    {
        cout<<"psssst dumbfk";
    }
    
    return 0;
}