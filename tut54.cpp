#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int x = stoi(s, 0, 2);
        int xp=0,xtemp =x;
        while(xtemp){
            xtemp=xtemp/2;
            xp++;
        }
        int answer_check = x ^ int(floor(x/int(pow(2,1))));
        int ans = 1;
        for(int i=1;i<=xp;i++){
            int tempr = x ^ int(floor(x/int(pow(2,i))));
            if(tempr>=answer_check){
                answer_check=tempr;
                ans=i;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}