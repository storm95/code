#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
#define pii pair<int,int>
#define mp make_pair

using namespace std;

int mdist = 0;
int mnode = 1;



void dfs(int v, int dis,bool vis[],vector<int>adj[]){
    vis[v] = true;
    if(dis>mdist){
        mdist=dis;
        mnode=v;
    }
    int vlen = adj[v].size();
    //cout<<vlen<<endl;
    for(int i=0;i<vlen;i++){
        int cur = adj[v][i];
        if(!vis[cur]){
            dfs(cur, dis+1,vis,adj);
            }
    }

}

int main(){
    ios::sync_with_stdio(false);

    int t,n,u,v;
    cin>>t;

    while(t--){
        cin>>n;
        bool vis[100005]={false};
        vector<int>adj[100005];
        for(int i=0;i<n-1;i++){
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        mdist=0;
        mnode = 1;
        dfs(mnode,mdist,vis,adj);
        //cout<<"mnode  :  "<<mnode<<endl;
        //cout<<"mdist  :  "<<mdist<<endl;
        mdist = 0;

        bool nvis[100005]={false};
        dfs(mnode,mdist,nvis,adj);
        cout<<mdist<<endl;

    }
    return 0;

}
