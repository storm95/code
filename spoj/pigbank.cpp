#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct item{
    int w;
    int p;
};
int dp[650][10500];
int main(){
    int t,n,e,f;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&e,&f,&n);
        vector<item>it(n+10);
        for(int i=1;i<=n;i++){
            scanf("%d%d",&it[i].p,&it[i].w);
        }
        dp[0][0]=0;
        int wt =f-e+50;
        for(int i=0;i<wt;i++){
            dp[0][i]=999999999;
        }
        for(int i=0;i<n+10;i++){
            dp[i][0]=0;
        }
        //cout<<"inti done " <<endl;
        for(int i=1;i<=n+10;i++){
            for(int j=1;j<=f-e+10;j++){
                if( (j-it[i].w) < 0 ){
                    dp[i][j]=min(dp[i-1][j],999999999);
                }
                else {
                    dp[i][j]=min(dp[i-1][j], dp[i][j-it[i].w]+it[i].p);
                }
            }
        }
        if(dp[n][f-e]>=999999999)printf("This is impossible.\n");
        else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[n][f-e]);
    }
    return 0;
}
