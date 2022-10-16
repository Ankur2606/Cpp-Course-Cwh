#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class point2;
class point1{
    int x,y;
    friend void distance(point1,point2);
    public:
        point1(int a,int b){
            cout<<"Enter the value of 1st point"<<endl;
            cin>>a;
            cout<<"Enter the value of 2nd point"<<endl;
            cin>>b;
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The distance between points ("<<x<<","<<y<<")"<<" and ";
        }
};

class point2{
    int x,y;
    friend void distance(point1,point2);
    public:
        point2(int a,int b){
            cout<<"Enter the value of 1st point"<<endl;
            cin>>a;
            cout<<"Enter the value of 2nd point"<<endl;
            cin>>b;
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"("<<x<<","<<y<<")"<<" is ";
        }
};

void distance(point1 a1,point2 b1){
    int a = a1.x - b1.x;
    int b = a1.y - b1.y;
    float e = sqrt(a*a + b*b);
    cout<<e;
}

int main(){
    point1 p(0,0);
    point2 b(0,0);
    p.displayPoint();
    b.displayPoint();
    distance(p,b);
    return 0;
}