#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[10000000];
int main(){
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = INT_MIN;
    scanf("%d",&k);
    for(int i=0;i<(n-k+1);i++){
        ans=INT_MIN;
        for(int j=0;j<k;j++){
            ans = max(ans,arr[i+j]);
        }
        printf("%d ",ans);
    }
    printf("\n");
    return 0;
}
