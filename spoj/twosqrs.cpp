#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int check(lli n,lli i,lli j){
    if(j*j == n)return 1;
    else while(i<=j){
        if(((i*i)+(j*j))==n){
            return 1;
        }
        else if(((i*i)+(j*j))<n){
            i+=1;
        }
        else{
            j-=1;
        }
    }
    return 0;
}
int main(){
    int t;
    long long int n,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        j=(long long int)sqrt(n);
        if(check(n,0,j)==1)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

