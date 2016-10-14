#include<iostream>
#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,m,u,v;
    cin>>n>>m;
    vector<int>adj[n+10];
    queue<int>qu;
    queue<int>ans;
    int indeg[1000000]={0};
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].pb(v);
        indeg[v]+=1;
    }

    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            qu.push(i);
        }
    }

    while(!qu.empty()){
        int top = qu.front();
        qu.pop();
        ans.push(top);
        for(int i=0; i<adj[top].size(); i++){
            int cur = adj[top][i];
            indeg[cur]-=1;
            if(indeg[cur]==0){
                qu.push(cur);
            }
        }

    }
    if(ans.size()!=n){
        cout<<"topo sort NP "<<endl;
        while(!ans.empty()){
            int top = ans.front();
            ans.pop();
            cout<<top<<" ";
        }
        cout<<endl;
    }
    else{
        while(!ans.empty()){
            int top = ans.front();
            ans.pop();
            cout<<top<<" ";
        }
        cout<<endl;
    }
    return 0;
}
