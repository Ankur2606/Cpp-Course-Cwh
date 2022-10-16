#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me ur age baka : "<<endl;
    cin>>age;
    // 1. Selection control structure: If else-if else ladder
    if((age<18)&&(age>=0)){
        cout<<"Minor ew"<<endl;
    }
    else if (age==18){
        cout<<"Border line pr h bro about to succumb chadness"<<endl;
    }
    else if(age<0){
        cout<<"paida toh hole veere"<<endl;
    }
    else{
        cout<<"aao pegging krte veere"<<endl;
    }
    //**Selection control sructure : Swtich case statements**
switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}