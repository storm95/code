#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(false);

    int t,n,p;
    cin>>t;
    while(t--){
        cin>>p>>n;

        int psq[200]={0};
        psq[0]=1;
        psq[1]=p;
        int lim = sqrt(n)+2;
        for(int i=2;i<=lim ;i++){
                psq[i]= (psq[i-1]*p) % mod ;
        }

        int tmp = n;
        int bit[1000]={0};
        int l = 0;
        while(tmp>0){
            bit[l]= tmp%2;
            tmp=tmp/2;
            l+=1;
        }

        int ans =0;
        for(int i=0,j=0;i<l;i++,j++){
            if(bit[i]==1)ans=(psq[j]+ans)%mod;
        }
        cout<<ans<<endl;

    }

    return 0;
}
