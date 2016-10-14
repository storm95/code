#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int diff=abs(a-d)+abs(b-c);
    long long int ans = (long long)max(n-diff,0)*n;
    cout<<ans<<endl;
    return 0;
}
