#include<iostream>
#include<cmath>
using namespace std;

class breh{
    public:
    void hmm(int b){
        int c = 1;
        for (int i = 2; i <= sqrt(b); i++)
        {
            if (b%i == 0 )
            {
                c=0;
            }
        }
        if (c!=0)
        {
            cout<<b<<endl;
        }
        
    }
    breh(int a){
        for ( int i = 2; i <= a; i++)
        {
            hmm(i);
        }        
    }
};
int main(){
    breh ew(100);
    return 0;
}