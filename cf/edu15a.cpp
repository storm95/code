#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len =1;
    int ans = 1;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            len = 1;
        }
        else len+=1;

        ans= max(ans,len);
    }
    cout<<ans<<endl;
    return 0;
}
