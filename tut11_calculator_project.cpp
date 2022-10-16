#include<iostream>
using namespace std;
int main(){
    int i=1;
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"\n";
    do
    {
     cout<<a<<"x"<<i<<" = "<<i*a<<endl;
     i++;
    } while (i<=10);
    
}