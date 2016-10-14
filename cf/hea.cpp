#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int segsize(int n){
    int sz==1;
    while(sz<n){
        sz<<=1;
    }
    return sz<<1;
}
int main(){
    ios::sync_with_stdio(false);
    string num;
    cin>>num;
    int n = num.length();
    if(n%3!=0){
        string ap((3-n%3),'0');
        n+=ap.length();
        num= ap.append(num);
        cout<<ap<<endl;
    }
    int segs = segsize(n);
    vector<string>segtree(segs,0)
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
    }
    return 0;
}
