#include<iostream>
#include<bits/stdc++.h>
#define uint64 unsigned long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    uint64 n;
    cin>>n;
    uint64 arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    uint64 l=0,r=0;
    uint64 flag = 0 ;
    uint64 ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            l=i;
            ans=1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            r=i;
            ans=1;
            break;
        }
    }
    //cout<<l<<" "<<r<<endl;

    for(int i=l;i<r;i++){
        //cout<<arr[i]<<endl;
        uint64 cnt = 1;
        if(arr[i]==1)continue;
        else if(arr[i]==0){
            i+=1;
            while(arr[i]!=1 && i<=r){
                cnt+=1;
                i+=1;
            }
            ans*=(cnt+1);
        }
    }

    cout<<ans<<endl;

}
