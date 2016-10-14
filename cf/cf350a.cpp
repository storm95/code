#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;

    int cnt = (n/7);
    cnt*=2;

    n=n%7;

    if(n==6)cout<<cnt+1<<" ";
    else cout<<cnt<<" ";
    cnt+=min(2,n%7);
    cout<<cnt<<endl;
    return 0;
}
