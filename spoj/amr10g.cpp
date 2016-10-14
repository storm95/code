#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        long long int arr[n]={0};
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        long long int diff=INT_MAX;
        for(int i=0;i+k-1<n;i++){
            diff = min(diff,arr[i+k-1]-arr[i]);
        }
        printf("%d\n",diff);
    }

}
