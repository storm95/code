#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,a;
    int cnt=0;
    cin>>n>>a;
    int arr[n+2];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    arr[0]=0;arr[n+1]=0;
    if(arr[a]==1)cnt+=1;
    int x = a;
    int p=x-1,q=x+1;
    while(p>0 || q<n+1){
        if(arr[p]==1 && (arr[q]==1 || q>n)){
            cnt+=arr[p]+arr[q];
        }
        else if(arr[q]==1 && (arr[p]==1 || p<=0)){
            cnt+=arr[p]+arr[q];
        }
        q=min(n+1,q+1);
        p=max(0,p-1);
    }
    cout<<cnt<<endl;
    return 0;
}
