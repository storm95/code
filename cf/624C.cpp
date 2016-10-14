#include<iostream>
#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,m,u,v,flag=0,a=0,b=0,c=0,noa=0,nob=0,noc=0;
    cin>>n>>m;
    vector<int>adj[1000];
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    char mark[n+1];
    memset(mark, 68, n+2);

    for(int i=1;i<=n;i++){
        if(adj[i].size()==n-1){mark[i]='b'; b+=1;}
    }

    for(int i=1;i<=n;i++){
        if(mark[i]=='D'){
            for(int j=0;j<adj[i].size();j++){
                if(mark[adj[i][j]]=='D'){mark[adj[i][j]]='a'; a+=1;}
            }
            mark[i]='a';
            a+=1;
            break;
        }
    }

    for(int i=1;i<=n;i++){
        if(mark[i]=='D'){
            for(int j=0;j<adj[i].size();j++){
                if(mark[adj[i][j]]=='D'){mark[adj[i][j]]='c'; c+=1;}
            }
            mark[i]='c';
            c+=1;
            break;
        }
    }
    char nl;
    for(int i=1;i<=n;i++){
        int len = adj[i].size();
        if(flag==1 || mark[i]=='D') {
            flag =1;
            break;
        }
        else if(mark[i]=='b') nl ='d';
        else if(mark[i]=='a') nl='c';
        else if(mark[i]=='c') nl='a';


        for(int j=0;j<len;j++){
            if(mark[adj[i][j]]==nl){
                flag =1;
                break;
            }
            else if(mark[i]=='a' && mark[adj[i][j]]=='a'){
                noa+=1;
            }
            else if(mark[i]=='b' && mark[adj[i][j]]=='b'){
                nob+=1;
            }
            else if(mark[i]=='c' && mark[adj[i][j]]=='c'){
                noc+=1;
            }
        }
    }
    cout<<(a*(a-1))/2<<" "<<noa<<endl;
    cout<<a+c<<" "<<nob<<endl;
    cout<<(c*(c-1))/2<<" "<<noc<<endl;

    if( abs(a*(a-1))/2 !=noa/2 || abs(b*(b-1))/2 !=nob/2 || abs(c*(c-1))/2 !=noc/2)flag=1;
    if(flag == 0){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<mark[i];
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;

}
