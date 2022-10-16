#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }
        A & setData2(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
        void getData2(){
            cout<<"The value of b is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    A b;
    b.setData2(5).getData2();

    return 0;
}