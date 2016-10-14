#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    string st;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>st;
        mp[st]=mp[st]+1;
    }
    map<string,int>::iterator it;
    int mm = 0;
    for(it = mp.begin();it!=mp.end(); it++){
        if(it->second > mm)mm=it->second;
    }
    cout<<mm<<endl;

    return 0;
}
