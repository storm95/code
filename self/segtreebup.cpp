#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int n;
int t[10000000];

int build(){//root of tree is at arr[i] so i>0 //each node i is calculated using val at 2i and 2+1 nodes
    for(int i=n-1; i>0 ; i--){t[i]=t[i<<1] + t[i<<1|1]; }
}

int modify(int p, int val){ //sets value at position p+n and then updates for each parent which have p in their range
    for(t[p+n]+=val; p>1 ;p>>=1){t[p>>1]=t[p]+t[p^1];}
}

int query(int l,int r){
    int res;
    l+=n;r+=n;
    for(;l<r;l>>=1,r>>=1){//if l is odd its right child so boundary ..... if r is odd the r-1 is left child so right boundary and this point includevalue of node
        if(l&1){res+=t[l];l+=1;}//add current node value and move to the right side
        if(r&1){r-=1;res+=t[r];}
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);//input the number of elements;
    cin>>n;
    for(int i=0;i<n;i++){cin>>t[n+i];}//input elements into the end of array from n to 2n-1
    build();
    modify(0,1);
    printf("%d\n",query(3,11));
    return 0;
}
