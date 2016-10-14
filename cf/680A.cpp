#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int arr[5];
    int sum =0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int diff=0;
    for(int j=0;j<5;j++){
        int cnt=0;
        for(int i=0;i<5;i++){
            if(arr[i]==arr[j])cnt+=1;
        }
        if(cnt==2){
            diff=max(diff,(2*arr[j]));
        }
        else if(cnt>=3){
            diff=max(diff,(3*arr[j]));
        }
    }
    int result = sum-diff;
    cout<<result<<endl;

    return 0;
}
