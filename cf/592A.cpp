#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    char board[9][9];
    int w[8]={0};
    int b[8]={0};

    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>board[i][j];
            if(board[i][j]=='W'){ w[j]= max(w[j],i);}
            else if(board[i][j]=='B' && b[j]==0 ){ b[j]=i;}
        }
    }


    char win;
    int tmp=0;
    int dis = INT_MAX;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(board[i][j]=='.'){
                continue;
            }

            else if(board[i][j]=='W'){
                if( b[j]!=0 && b[j]<=i){continue;}
                else{
                    tmp = i-1;
                    if(tmp<=dis){dis=tmp; win='A';}
                }
            }
            else if(board[i][j]=='B'){
                if( w[j]!=0 && w[j]>=i ){continue;}
                else{
                    tmp = 8-i;
                    if(tmp<dis){dis=tmp; win='B';}
                }
            }

        }
    }
    cout<<win<<endl;

    return 0;
}
