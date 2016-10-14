#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[20000]={0};
int ans[2001][2001]={0};
int check(int l, int r , int y){
    if(l==r){
        return ans[l][r]=arr[l]*y;
    }
    if(l>r)return 0;

    if(ans[l][r]!=0)return ans[l][r];
    else{
        return ans[l][r]=max(check(l+1,r,y+1)+arr[l]*y, check(l,r-1,y+1)+arr[r]*y);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int val = check(0,n-1,1);
    printf("%d\n",val);
    return 0;
}
