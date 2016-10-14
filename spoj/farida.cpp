#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,x=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }
        for(int i=2;i<=n;i++){
            arr[i]=max(arr[i-1], (arr[i-2]+arr[i]));
        }
        printf("Case %d: %lld\n",x,arr[n]);
        x+=1;
    }
    return 0;
}
