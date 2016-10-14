#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int n,k,m;

bool cmp(string a, string b){
    if(a.substr(0,k)<=b.substr(0,k))return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        vector<string>inp(n);
        for(int i=0;i<n;i++){
            cin>>inp[i];
        }
        stable_sort(inp.begin(), inp.end(), cmp);
        cout<<inp[k-1]<<endl;
    }
    return 0;
}
