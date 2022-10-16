#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    int interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p,int y,float r); //r can be a value like 0.04
        BankDeposit(int p,int y,int r); //r can be a value like 14
        void show(){
            cout<<endl<<"Principal amount was "<<principal
                <<" Return value after "<<years
                <<" years  is "<<returnValue<<endl;
        }
};
BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *=(1+r);
    }
    
}
BankDeposit :: BankDeposit(int p,int y,int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *=(1+interestRate);
    }
    
}
int main(){
    BankDeposit bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    BankDeposit bd1(p,y,r);
    bd1.show();             //parameters dalne ke cool tarike
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    BankDeposit bd2 = BankDeposit(p,y,R);
    bd2.show();
    bd3 = BankDeposit();
    bd3.show();

    return 0;
}