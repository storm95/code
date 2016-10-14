#include<bits/stdc++.h>
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define amax 1000000005
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,m,c,u,v,w,cc,s,q;
    vector< pair<int,pii> >adj[100002];
    cin>>n>>m>>c;

    for(int i=1;i<=m;i++){
        cin>>u>>v>>w>>cc;
        adj[u].pb(mp(v,mp(w,cc)));
    }
    cin>>s>>q;
    int t[q];
    for(int b=0;b<q;b++){
        cin>>t[b];
    }
    priority_queue< pii , vector<pii>, greater<pii> >pq;
    int d[n+10]; int col[n+10]={0};
    fill(d,d+n+10,INT_MAX);
    bool mark[n+10]={false};

    d[s]=0;
    pq.push(mp(d[s],s));
    int cur_col=-1, new_col;

    while(!pq.empty()){
        u=pq.top().second;
        pq.pop();
        //cout<<"col: "<<u<<"  :  "<<col[u]<<endl;
        if(mark[u])continue;
        mark[u]=true;
        int sz = adj[u].size();
        for(int i=0;i<sz;i++){
            int cur = adj[u][i].first;
            int cst = adj[u][i].second.first;
            cc = adj[u][i].second.second;
            if( (d[cur] > (d[u] + cst)) && (cc!=col[u]) ){
                col[cur]=cc;
                d[cur] = d[u] + cst;
                pq.push(mp(d[cur],cur));
            }

        }
    }

    for(int b=0;b<q;b++){
        int tt=t[b];
        if(d[tt]>=amax)cout<<-1<<endl;
        else cout<<d[tt]<<endl;
    }
    return 0;
}
