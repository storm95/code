#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int rem = n%k;
    int ans = n+(k-rem) ;
    cout<<ans<<endl;
    return 0;

}
