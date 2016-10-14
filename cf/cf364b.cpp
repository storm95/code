#include<iostream>
#include<bits/stdc++.h>

#define pb push_back
//#define mp make_pair
#define pii pair<int,int>
#define lli unsigned long long int


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int m;
    lli n;
    cin>>n>>m;
    unordered_map<int,bool>mp1;
    unordered_map<int,bool>mp2;
    int ro,col;
    lli tot = n*n;
    for(int i=0;i<m;i++){
        cin>>ro>>col;
        if(mp1.find(ro)==mp1.end() && mp2.find(col)==mp2.end()){
            tot-=(((n-mp1.size())+(n-mp2.size()))-1);
            mp1[ro]=true;
            mp2[col]=true;
        }
        else if(mp1[ro]==true && mp2[col]==true){}
        else if(mp1[ro]==true){
            tot-=(lli)(n-mp1.size());
            mp2[col]=true;
        }
        else if(mp2[col]==true){
            tot-=(lli)(n-mp2.size());
            mp1[ro]=true;
        }
        cout<<tot<<" ";
    }
    return 0;

}

