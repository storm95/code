#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,n;
    scanf("%d",&t);
    int arr[0];
    while(t--){
        scanf("%d",&n);
        int i,result=n;
        for(i=2;i*i<=n;i++){
            if(n%i==0)result-=result/i;
            while(n%i==0)n/=i;
        }
        if(n>1)result-=result/n;
        printf("%d\n",result);
    }
    return 0;
}
