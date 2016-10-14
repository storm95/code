#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n ;
    cin>>n;

    vector<int>powers(31,1);
    for(int i=1;i<=31;i++){
        powers[i]=(powers[i-1]*2);
    }
    int tmp; long long int cnt=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        for(int i=0;i<=31;i++){
            cnt+=mp[powers[i]-tmp];
        }
        mp[tmp]+=1;
    }
    if(n==1){cout<<0<<endl;return 0;}
    cout<<cnt<<endl;
    return 0;
}
