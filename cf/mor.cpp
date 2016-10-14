#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pro;
    for(int i=0;i<d;i++){
        cin>>pro;
        unordered_map<int,int>mp;
        int days = INT_MAX; int dy = INT_MAX, st=-1;
        for(int x=0;x<n;x++){
            int cur = arr[x];
            int tar = cur-pro;
            if(mp.find(tar)!=mp.end()){
                dy = x-mp[tar];
                if(dy<days){
                    days = dy;
                    st = mp[tar];
                }
            }
            mp[arr[x]]=x;
        }
        if(st==-1){cout<<-1<<endl;}
        else{
            cout<<st+1<<" "<<st+1+days<<endl;
        }
    }
    return 0;
}
