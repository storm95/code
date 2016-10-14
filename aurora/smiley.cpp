#include<bits/stdc++.h>
#include<iostream>
#define lli long long int
using namespace std;
bool cmp(lli a, lli b){
    return a>b;
}
int main(){
    ios::sync_with_stdio(false);
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        lli arr[10000]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,cmp);
        lli pa=0,pb=0;
        for(int i=0;i<n;i++){
            if(i%2==0)pa+=arr[i];
            else pb+=arr[i];
        }
        if(pa%pb==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
