#include<iostream>
#include<bits/stdc++.h>

#define pii pair<int,int>
#define mp make_pair

using namespace std;

int maap[50][50];
bool vis[50][50]={false};
int n,m;

int dfs(int i,int j){

    stack<pii> stk ;
    stk.push(mp(i,j));
    int x,y;


    while(!stk.empty()){
        x = stk.top().first;
        y = stk.top().second;
        vis[x][y]=true;
        stk.pop();

        //top
        if(x-1>=0 && maap[x-1][y]==1 && vis[x-1][y]==false ){
            stk.push(mp(x-1,y));
        }

        //left
        if(y-1>=0 && maap[x][y-1]==1 && vis[x][y-1]==false ){
            stk.push(mp(x,y-1));
        }

        //right
        if(y+1<m && maap[x][y+1]==1 && vis[x][y+1]==false ){
            stk.push(mp(x,y+1));
        }

        //bottom
        if(x+1<n && maap[x+1][y]==1 && vis[x+1][y]==false ){
            stk.push(mp(x+1,y));
        }
    }
}

int main(){
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>maap[i][j];
                vis[i][j]=false;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==false && maap[i][j]==1){
                    cnt+=1;
                    //cout<<"doing bfs from "<<i<<" "<<j<<endl;
                    dfs(i,j);
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;

}
