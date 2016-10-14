#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    bool siv[1000005]={false};
    vector<int>prime;
    for(int i=2;i<=1000;i++){
        if(siv[i])continue;
        prime.push_back(i);
        for(int j=i+i;j<=1000000;j+=i){
            siv[j]=true;
        }
    }
    int t,n;
    scanf("%d",&t);
    int arr[0];
    int len =prime.size();
    while(t--){
        scanf("%d",&n);
        int i,result=n;
        for(i=0;prime[i]*prime[i]<=n,i<len;i++){
            if(n%prime[i]==0)result-=result/prime[i];
            while(n%prime[i]==0)n/=prime[i];
        }
        if(n>1)result-=result/n;
        printf("%d\n",result);   //<<endl;
    }
    return 0;
}
