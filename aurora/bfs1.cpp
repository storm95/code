#include<iostream>
#include<bits/stdc++.h>

#define mp make_pair
#define pii pair <int,int>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int t,n,s,d;
    cin>>t;
    while(t--){
        cin>>n>>s>>d;
        int adj[n][n];
        bool vis[30]={false};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>adj[i][j];
            }
        }
        if(s==d){ cout<<0<<endl; continue;}

        queue<pii> qu;
        int dist = 0 ; 
        int ans  = INT_MAX;
        qu.push(mp(s,dist));
        int flag = -1 ; 
        int  cur ; 
        while(!qu.empty()){
            cur = qu.front().first;
            int dis = qu.front().second;
            vis[cur]=true;
            qu.pop();
            if( adj[cur][d]==1 ){ ans=min(dis+1,ans); flag =1; }
            for(int i=0;i<n;i++){
                if(adj[cur][i] == 1 && vis[i]==false){
                    qu.push(mp(i,dis+1));
                }
            }
            
        }
        if(flag==-1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans<<endl;
        }


    }
    return 0;
}
