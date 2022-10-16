#include<iostream>
using namespace std;

class base{
    float interest;
    float p_amount;
    int months;
    int dep;
    float sum;
    public:
        base(int p , float i , int m){
            interest = i;
            p_amount = p;
            months = m;
            dep  =  p_amount/months;
            sum = 0;
            for (int i = 0; i < months; i++)
            {
                p_amount -= dep;
                if(p_amount <= 0){
                    break;
                }
                sum += p_amount * (interest/100);
            } 
        }
        void show(){
            cout<<"The extra sum to be paid : "<<sum<<endl;
        }
};
int main(){
    int m;
    float i,p;
    cout<<"Enter principal amount : "<<endl;
    cin>>p;
    cout<<"Enter interest rate  : "<<endl;
    cin>>i;
    cout<<"Enter months : "<<endl;
    cin>>m;
    base acc(p,i/12,m);
    acc.show();
    return 0;
}