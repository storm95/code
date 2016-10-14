#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int n,k,m;

bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.first.substr(0,m)<b.first.substr(0,m))return true;
    else if(a.first.substr(0,m)==b.first.substr(0,m)){
        if(a.second<b.second)return true;
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        vector<pair<string,int> >inp(n);
        for(int i=0;i<n;i++){
            cin>>inp[i].first;
            inp[i].second=i;
        }
        sort(inp.begin(), inp.end(), cmp);
        cout<<inp[k-1].first<<endl;
    }
    return 0;
}
