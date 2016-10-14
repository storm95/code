#include<iostream>
#include<bits/stdc++.h>

#define vi vector<int>
#define vvi vector< vector<int> >
#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>adj[n+5];
    int arr[n+5];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int p,c;
    for(int i=1;i<=n-1;i++){
        cin>>p>>c;
        if(arr[i+1]<c)continue;
        else {
            adj[p].pb(mp(i+1,c));
            adj[i+1].pb()

        }
    }
    return 0;
}
