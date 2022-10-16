#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
        void indata(int a){
            val = a;
        }

        void display(void){
            cout<<val<<endl;
        }
    friend void swap(c1 &,c2 &); 
};

class c2{
    int val;
    public:
        void indata(int a){
            val = a;
        }

        void display(void){
            cout<<val<<endl;
        }
    friend void swap(c1 &,c2 &);
};

void swap(c1 & a1,c2 & b1){ //reference to a data of type c1 and c2
    int swap;
    swap  = a1.val;
    a1.val = b1.val;
    b1.val = swap;
}

int main(){
    c1 a;
    c2 b;

    a.indata(1);
    a.display();

    b.indata(2);
    b.display();

    swap(a,b);
    cout<<"Value after swapping : "<<endl;
    a.display();
    b.display();

    return 0;
}