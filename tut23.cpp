#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initCounter(void){counter = 0;}
    void set_price(void);
    void get_price(void);
};

void shop :: set_price(void){
    cout<<"Enter the ID of your  Item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter Price of you Item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: get_price(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Price of your item with ID "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}

int main(){
    int item_no;
    cout<<"Enter no of Items"<<endl;
    cin>>item_no;
    shop dukaan;
    dukaan.initCounter();
    for (int i = 0; i < item_no; i++)
    {
        dukaan.set_price();
    }
    dukaan.get_price();
    return 0;
}