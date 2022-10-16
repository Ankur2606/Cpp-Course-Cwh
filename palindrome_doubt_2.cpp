//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//                     //*****Doubt******
//int main(){           //how to do it with array as i could get the length  or array
//                       /// hogya sort bas bits/stdc library include krni thi to make strlen func work
//    char str[100];
//    int breh = 0;
//    cout<<"Enter a word"<<endl;
//    cin>>str;
//    int  len = strlen(str);
//    for (int i = 0; i < len ; i++)
//    {
//        if (str[i] != str[len - i - 1])
//        {
//            breh = 1 ;
//            break;
//        }  
//    }
//    if(breh)
//    {
//        cout<<"its  not a palindrome\n"<<len;
//    }
//    else
//    {
//        cout<<"This  is a palindrome";
//    }   
//    return 0;
//}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int breh = 0;
    cout<<"Enter a word"<<endl;
    cin>>str;
    int len = str.length();
    for (int i = 0; i < len ; i++)
    {
        if (str.at(i) != str.at(len-i-1)) // or if (str[i] != str[len-i-1])
        {
            breh = 1 ;
            break;
        }  
    }
    if(breh)
    {
        cout<<"its  not a palindrome\n"<<len;
    }
    else
    {
        cout<<"This  is a palindrome";
    }   
    return 0;
}