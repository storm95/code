#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string st1,st2;
    int n,m;
    map<string,string>mp;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>st1>>st2;
        if(st2.length()<st1.length())mp[st1]=st2;
        else mp[st1]=st1;
    }
    for(int i=0;i<n;i++){
        cin>>st1;
        cout<<mp[st1]<<" ";
    }
    return 0;
}
