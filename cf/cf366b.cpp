#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

	ios::sync_with_stdio(false);
    lli n ;
    cin>>n;
    vector<lli>arr(n,0);
    lli c,lev=0;
    while(n--){
       cin>>c;
       lev+=(c-1);
       if(lev%2==1)cout<<1<<endl;
       else cout<<2<<endl;
    }

	return 0;
}

