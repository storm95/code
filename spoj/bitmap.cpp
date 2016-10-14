#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

int ans[200][200];
int t,n,m;

int bfs_mod(int x, int y){

    queue< pair<int,int> > qu;
    qu.push(make_pair(x,y));
    ans[x][y]=0;

    while(!qu.empty()){
        x = qu.front().first;
        y = qu.front().second;
        qu.pop();
        int dist = ans[x][y]+1;

        //up 
        if(x-1>=0 && dist<ans[x-1][y]){
            ans[x-1][y]=dist;
            qu.push(make_pair(x-1,y));
        }

        //down 
        if(x+1<=n && dist<ans[x+1][y]){
            ans[x+1][y]=dist;
            qu.push(make_pair(x+1,y));
        }

        //left
        if(y-1>=0 && dist<ans[x][y-1]){
            ans[x][y-1]=dist;
            qu.push(make_pair(x,y-1));
        }

        //right
        if(y+1<=m && dist<ans[x][y+1]){
            ans[x][y+1]=dist;
            qu.push(make_pair(x,y+1));
        }

    }  // end of while loop 


}


int main(){
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>n>>m;
        char ch;
        vector< pair<int,int> > q;
        for(int i = 0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>ch;
                if(ch == '1'){
                    q.push_back(make_pair(i,j));
                    ans[i][j]=0;
                }
                else{
                    ans[i][j]=INT_MAX;
                }
    
            }
        }   

        int veclen= q.size();
    
        for(int i=0 ; i<veclen ; i++){
            bfs_mod(q[i].first , q[i].second);
        }
    

        for( int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 cout<<ans[i][j]<<" ";
             }
             cout<<endl;
        }
    }

    return 0;
}
