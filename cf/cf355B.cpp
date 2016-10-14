#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,h,k;
    cin>>n>>h>>k;
    long long int tmp=0,cnt=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n;i++){
        //cout<<tmp<<" "<<cnt<<endl;
        if(tmp+arr[i]>h){
            int diff = (tmp+arr[i])-h;
            //cout<<(tmp+arr[i])<<" "<<diff<<endl;
            int app=diff/k;
            if(diff%k>0)app+=1;
            tmp=max(tmp-(app*k),0LL);
            tmp+=arr[i];
            cnt+=app;
            //cout<<tmp<<" "<<cnt<<endl;
        }

        else tmp+=arr[i];
        //cout<<tmp<<" "<<cnt<<endl;
    }
    if(tmp>0){
        //cout<<tmp<<" "<<cnt<<endl;
        cnt+=tmp/k;
        if((tmp%k)>0)cnt+=1;
        //cout<<tmp<<" "<<cnt<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}

//2+5-3
