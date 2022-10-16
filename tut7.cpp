#include<iostream>
using namespace std;
int c = 3;
int main(){
    //****Build in datatypes****
    //int num1,num2;
    //cout<<"Enter num 1 : \n";
    //cin>>num1;
    //cout<<"Enter num 2 : \n";
    //cin>>num2;
    //int c = num1 + num2;
    //cout<<"Golbal num1 + num2 : \n"<<::c<<"\n";
    //cout<<"Local num1 + num2 : \n"<<c<<endl;
    //****float , double and long double Literals****
    //float d = 34.4;
    //long double e = 34.4;
    //cout<<"The value d is"<<endl<<d<<endl<<"The value of e is"<<endl<<e<<endl;
    //cout<<"The size of 34.4(double) : "<<sizeof(34.4)<<endl;
    //cout<<"The size of 34.4f(float) : "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4l(long double) : "<<sizeof(34.4l)<<endl;
    //****Reference Variables****
    float x = 455.9;
    float &y =x;
    cout<<x<<endl<<int(x)<<endl;
    //when x value changes &y value also changes
    x = 9;
    cout<<y<<endl;
    y = 68;
    cout<<x<<endl;
    return 0;
}
