#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,h;
    cin>>n>>h;
    int arr[n],cnt=0,tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp>h)cnt+=2;
        else cnt+=1;
    }
    cout<<cnt<<endl;

    return 0;
}
