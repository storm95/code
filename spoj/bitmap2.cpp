#include<iostream>
#include<bits/stdc++.h>
#define mp make_pair
#define pi pair<int,int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,n,m;
    cin>>t;
    char ch;
    while(t--){
        cin>>n>>m;
        queue<pi>qu;
        int ans[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch;
                if(ch=='1'){
                    qu.push(mp(i,j));
                    ans[i][j]=0;
                }
                else{
                    ans[i][j]=INT_MAX;
                }
            }
        }
       int x,y,cur; 
        while(!qu.empty()){
            x = qu.front().first;
            y = qu.front().second;
            cur = ans[x][y]+1;
            qu.pop();

            //up 
            if(x-1 >=0 && cur<ans[x-1][y] ){
                ans[x-1][y]=cur;
                qu.push(mp(x-1,y));
            }
            
            //down
            if(x+1 < n && cur<ans[x+1][y] ){
                ans[x+1][y]=cur;
                qu.push(mp(x+1,y));
            }
            
            //right
            if(y-1 >=0 && cur<ans[x][y-1] ){
                ans[x][y-1] = cur; 
                qu.push(mp(x,y-1));
            }
            
            //left
            if(y+1 < m && cur<ans[x][y+1] ){
                ans[x][y+1] = cur;
                qu.push(mp(x,y+1));
            }

        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}
