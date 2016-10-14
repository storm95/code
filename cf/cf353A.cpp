#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long int a,b,c;
    cin>>a>>b>>c;
    if(c==0){
        if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        long long int tmp = (b-a+c)/c;
        long long int chk = (a+(abs(tmp-1)*c));
        if(chk==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
