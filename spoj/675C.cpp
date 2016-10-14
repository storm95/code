#include<iostream>
#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    //cin.tie(0);
    int n,t;
    scanf("%d",&n);
    map<lli,int>mp;
    lli sum=0; int ans=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        sum+=t;
        mp[sum]++;
        ans = min(ans,n-mp[sum]);
    }

    cout<<ans<<endl;

    return 0;

}
