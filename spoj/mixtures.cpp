#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int dp[105][105]={0};
int val[105][105]={0};
int solve(int p[], int i, int j){
    if(dp[i][j]!=INT_MAX){
        return dp[i][j];
    }
    if(i==j){
        val[i][j]=p[i];
        dp[i][j]=0;
        return dp[i][j];
    }
    else{
        for(int k=i;k<j;k++){
            if(dp[i][j]>((solve(p,i,k)+solve(p,k+1,j)) + (val[i][k]*val[k+1][j]) )){
                dp[i][j] =((val[i][k]*val[k+1][j]) + (dp[i][k]+dp[k+1][j]));
                val[i][j]=(val[i][k]+val[k+1][j])%100;
            }
        }
        return dp[i][j];
    }
}
int main(){
    int n;
    while(scanf("%d",&n)>0){
        int p[n];
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++)dp[i][j]=INT_MAX;
        }
        memset(val,0,sizeof(val));
        int ans = solve(p,0,n-1);
        printf("%d\n",ans);
    }
    return 0;
}
/*
for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
*/
