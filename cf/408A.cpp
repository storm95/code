#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int inp[100]={0};
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    int items=0;
    int time = INT_MAX;
    for(int i=0; i<n;i++){
        int tmp = 15*inp[i];
        for(int j=1;j<=inp[i];j++){
            cin>>items;
            tmp+=(items*5);
        }
        time = min (time,tmp);
    }
    cout<<time<<endl;
}

