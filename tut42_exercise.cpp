#include<iostream>
#include<cmath>
using namespace  std;

class simple
{
    protected:
        int x1,y1;
    public:
        void process()
        {
            cout<<"The addition is "<<x1+y1<<endl;
            cout<<"The subtraction is "<<x1-y1<<endl;
            cout<<"The multiplication is "<<x1*y1<<endl;
            cout<<"The division is "<<x1/y1<<endl;
        }
        void set(int a,int b)
        {
            x1=a;
            y1=b;
        }
};

class scientific
{
    protected:
        int x2,y2;
    public:
        void process()
        {
            cout<<"The square root of " <<x2<<" is "<<sqrt(x2)<<endl;
            cout<<"The square root of " <<y2<<" is "<<sqrt(y2)<<endl;
            cout<<"The cube root of " <<x2<< " is " <<cbrt(x2)<<endl;
            cout<<"The cube root of " <<y2<< " is "<<cbrt(y2)<<endl;
        }
        void set(int a,int b)
        {
            x2=a;
            y2=b;
        }
};

class hybrid: public simple,public scientific
{
    public:
        void masterset(int a,int b)
        {
            simple::set(a,b);
            scientific::set(a,b);
            simple::process();
            scientific::process();
        }
};

int main()
{
    int p,q;
    hybrid h;
    cout<<" Enter two values "<<endl;
    cin>>p>>q;

    h.masterset(p,q);
    return 0;
}