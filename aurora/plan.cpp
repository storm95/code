#include<bits/stdc++.h>

#define pii pair<int,int>
#define pb push_back
#define mp make_pair
using namespace std;

int t,n,e,p,q,d,u,v,trips;

int check(int u,int cost, vector<pii>*check){
    if(int u == d)
        return 1;
    else{
        dfs(u,cost+1,d);
    }
}

int main(){
    ios::sync_with_stdio(false);

    cin>>t;
    while(t--){
        cin>>n>>e;
        vector<int>adj[200];
        for(int i=0;i<e;i++){
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        cin>>trips;
        for(int i=0;i<trips;i++){
            cin>>d>>p;
            vector<pii>check[200];
            check[d]=mp(0,0);
            dfs(1,INT_MAX,check)


        }


    }

    return 0;

}
