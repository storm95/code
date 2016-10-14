#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct node{
    long int sum=0;
    long int bst=-18000;
    long int br=-18000,bl=-18000;
};

long int n,m,l,r;
node t[10000000];


node combine( node l, node r){
    node res;

    res.sum = l.sum+r.sum;
    res.bl= max(l.bl , l.sum+r.bl);
    res.br= max(r.br, r.sum+l.br);
    res.bst= max(max(l.bst,r.bst),l.br+r.bl);

    return res;
}

int build(){
    for(int i=n-1;i>0;i--){
        t[i]=combine(t[i<<1],t[i<<1|1]);
    }
}


node query(int l,int r){
    node resl,resr;
    l+=n;r+=n;
    for(;l<r;l>>=1,r>>=1){
        if(l&1){resl=combine(resl,t[l]); l+=1;}
        if(r&1){r-=1;resr= combine(t[r],resr);}
    }
    return combine(resl,resr);
}

int main(){
    scanf("%d",&n);long int tmp;
    for(int i=0;i<n;i++){
        scanf("%ld",&tmp);
        t[i+n].sum=tmp; t[i+n].bst=tmp; t[i+n].bl=tmp; t[i+n].br=tmp;
    }
    build();
    //cout<<endl;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d%d",&l,&r);
        node a=query(--l,r);
        printf("%ld\n",a.bst);
    }
    return 0;
}
/*
for(int i=1;i<=2*n-1;i++){
        cout<<t[i]<<" ";
    }
*/
