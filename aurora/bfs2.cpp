#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,s,d,n,m,u,v;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>s>>d;
        vector<int> adj[100];
        for(int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].pb(v);
        }
        bool vis[100] = {false};
        queue<pii>qu ;
        qu.push(mp(s,0));
        int ans =INT_MAX,vlen;
        int flag = -1;
        while(!qu.empty()){

            int cur = qu.front().first;
            int dis = qu.front().second;
            vis[cur]=true;
            qu.pop();

            if(cur==d){ans = min(ans,dis); flag =1;}

            vlen = adj[cur].size();
            for(int i=0;i<vlen;i++){
                v=adj[cur][i];
                if(vis[v])continue;
                else{
                    qu.push(mp(v,dis+1));
                }
            }
        }
        if(flag==-1){
            cout<<flag<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
