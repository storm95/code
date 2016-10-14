#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    long long int arr[n+1];
    long long int ans[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    long long int mx = INT_MIN;
    long long int tmp;
    ans[n]=0;
    mx=arr[n];
    for(int i=n-1;i>=1;i--){

        tmp=0;
        if(arr[i]<=mx){
            tmp = abs(arr[i]-mx) + 1;
        }
        ans[i]=tmp;
        mx = max(mx,arr[i]);
    }

    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}
