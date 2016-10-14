#include<iostream>
#include<bits/stdc++.h>
#define pb push_back

using namespace std; 

vector<int>adj[1000000];
bool grey[1000000]={false};
bool black[1000000]= {false};


void  mod_dfs(int v){
    if(black[v]==true)return ;
    if(grey[v]==true){
        cout<<"\n toposort not possible"<<endl;
        return;
    }
    else {
        grey[v]=true;
        for(int i=0;i<adj[v].size();i++){
            int cur = adj[v][i];
            mod_dfs(cur);
        }
    }
    grey[v]=false;
    black[v]=true;
    cout<<v<<" ";    
}
int main(){
    ios::sync_with_stdio(false);
    
    int n;  //number of nodes 
    int e;  //number of edges 
    int u,v; 
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        cin>>u>>v; //input the edge (u --> v) 
        adj[u].pb(v);
    }
    for(int i=0;i<n;i++)mod_dfs(i);
    cout<<endl;

    
    return 0;
}
