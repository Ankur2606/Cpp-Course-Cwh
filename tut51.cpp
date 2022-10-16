#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The img part is "<<img<<endl;
        }

        void setdata(int a,int b){
            real = a;
            img = b;
        }
};

int main(){
    Complex c1;
    Complex *ptr = &c1;
    c1.setdata(1,54);
    (*ptr).setdata(1,54);// parathesis is imp because precedence of dot operator is greater than star operator
    delete ptr;
    c1.getdata();
    (*ptr).getdata(); // parathesis is imp because precedence of dot operator is greater than dereference operator
    Complex *breh = new Complex;
    breh->setdata(7,69);
    //delete breh;
    breh->getdata();
    Complex *cute = new Complex;
    (cute)->setdata(1,2);
    (cute)->getdata();
    (cute + 1)->setdata(3,4);
    (cute + 1)->getdata();
    (cute + 2) ->setdata(5,6);
    (cute + 2) ->getdata();
    (cute + 3)->setdata(7,8);
    (cute + 3)->getdata();
    return 0;
}