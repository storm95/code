#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    lli houses=1234567;
    lli cars=123456;
    lli comp = 1234;
    lli n;
    cin>>n;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=10000;j++){
            lli tmp = (houses*i)+(cars*j);
            lli rem = n-tmp;
            if(rem<0)continue;
            if(rem%comp==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

