#include<iostream>
#include<bits/stdc++.h>

#define lli long long int
using namespace std;
int arr[500000];
int main(){
    int n;lli m;
    scanf("%d%lld",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,r=0;
    lli tmp=0,ans=0;
    while(r<n && l<n){
        //cout<<tmp<<" "<<ans<<endl;
        if(arr[r]>m){
            l=r+1;
            r+=1;
        }
        if(tmp+arr[r]<=m){
            tmp+=arr[r];
            ans= max(ans,tmp);
            r+=1;
        }
        else{
            tmp-=arr[l];
            l+=1;
        }

    }
    printf("%lld\n",ans);
    return 0;
}
