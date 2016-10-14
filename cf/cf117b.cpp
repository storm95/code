#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    lli n,d;
    cin>>d>>n;
    lli arr[n];
    lli chng=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        chng+=(d-arr[i]);
    }
    cout<<chng<<endl;
}
