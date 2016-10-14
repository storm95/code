#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[10000000]={0};
int main(){
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=500;
    int mn = INT_MAX,sum=0,pos =1;;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    mn = min(mn,sum);
    //cout<<sum<<"     ";
    for(int i=1;i<=n-k;i++){
        sum-=arr[i-1];
        sum+=arr[k+i-1];
        cout<<sum<<" ";
        if(sum<mn){
            mn=sum;
            pos=i+1;
        }

    }
    cout<<endl;
    cout<<pos<<endl;

    return 0;
}
