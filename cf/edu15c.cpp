#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int city[n]; int tow[m];
    int dist[n];
    for(int i=0;i<n;i++){
        cin>>city[i];
    }
    for(int i=0;i<m;i++){
        cin>>tow[i];
    }
    int cur =0;
    for(int i=0;i<n;i++){
        dist[i]=abs(tow[cur]-city[i]);
        while((cur+1)<m && (abs(tow[cur+1]-city[i])<=dist[i])){
            dist[i]=abs(tow[cur+1]-city[i]);
            cur+=1;
        }
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        //cout<<dist[i]<<" ";
        ans= max(ans,dist[i]);
    }
    //cout<<endl;
    cout<<ans<<endl;
    return 0;
}
/*
10 10
2 52 280 401 416 499 721 791 841 943
246 348 447 486 507 566 568 633 953 986
*/
