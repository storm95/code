#include<iostream>
#include<bits/stdc++.h>

#define pii pair<int,int>
#define pb push_back
#define mp make_pair

using namespace std;

void shortest(int v){

}

int main(){
    ios::sync_with_stdio(false);

    int n,u,v,w;
    cin>>n;
    vector<pii>adj[n+1];
    for(int i=0; i<n; i++){
        cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }

    //shortest(1);
    cout<<"Enter starting node " <<endl;
    cin>>v;
    bool mark[n+1]={false};
    int d[n+1];
    fill(d,d+n+1,INT_MAX);
    d[v]=0;
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(d[v],v));

    while(!pq.empty()){
        u = pq.top().second;
        pq.pop();
        if(mark[u])continue;
        mark[u]=true;
        int sz = adj[u].size();
        for(int i=0;i<sz;i++){
            pii p = adj[u][i];
            if(d[p.first] > d[u] + p.second){
                d[p.first] = d[u] + p.second;
                pq.push(mp(d[p.first],p.first));
            }
        }
    }

    //display result;
    for(int i=1;i<=n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    return 0;
}
