#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    map<int,int>mp;
    int tmp,sum=0;
    for(int i=0;i<5;i++){
        cin>>tmp;
        mp[tmp]+=1;
        sum+=tmp;
    }
    int diff=0;
    map<int,int>::iterator it;
    it=mp.begin();
    while(it!=mp.end()){
        if(it->second==2)diff=max(diff,(it->first*2));
        else if(it->second>=3)diff=max(diff,(it->first*3));
        it++;
    }
    cout<<sum-diff<<endl;
    return 0;
}
