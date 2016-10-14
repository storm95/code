#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
using namespace std;

long long int fact[1000000]={0};

long long int facto(int n, int r ){
    lli ans =1 ;
    r = n-r;
    for(int i=n;i>r;i--){
        ans=((ans%MOD)*(i%MOD))%MOD;
    }
    //cout<<"fact "<<n<<" :  " <<fact[n]<<endl;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    fact[1]=1;
    fact[2]=2;
    //cout<<"hehe"<<endl;

    int t,n,m,q;
    cin>>t;
    while(t--){
        cin>>n>>m>>q;
        if(m==0){cout<<0<<endl; continue; }
        int r = q*m;
        lli ans = facto(n,r);
        cout<<ans<<endl;
    }
    return 0;
}
