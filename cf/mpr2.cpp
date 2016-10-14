#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pii;
typedef map<ll,ll> mi;

#define si(a) scanf("%lld",&a)
#define sii(a,b) scanf("%lld %lld",&a,&b)
#define siii(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pi(a) prllf("%lld\n",a)
#define nl printf("\n");
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,a,b) for(i=a;i>=b;i--)
#define clr(x,a) memset(x,a,sizeof(x))
#define MAX 1000100
#define MOD 1000000007
#define F first
#define S second

ll n,m,a[MAX],b[MAX],dp[MAX];
mi mm,m2;
vi v,w;

int main(){
    ll mp=1e15,mq=1e15,prev,r=0,k,i,c=0,x=0,y=0,j,t=0,l,z=0,x1=0,y1=0;
    ll ans=0;string s,p,q;

    cin>>n;
    f(i,1,MAX){
        if(n%i==0){
            v.pb(i);
            mm[i]=1;
        }
    }
    f(i,1,MAX){
        if((n*n)%i==0){
            m2[i]=1;
        }
    }
    int lim = sqrt(n);
    f(i,0,v.size()){
        f(j,i,v.size()){
            if(v[i]<lim || v[j]<=lim){

                    cout<<v[i]<<" "<<v[j]<<" "<<v[i]*v[j]<<endl;
                    mm[v[i]*v[j]]=1;
            }
        }
    }
    for(mi::iterator it=mm.begin();it!=mm.end();it++){
        x=it->first;
        if(x<n && n%x!=0)
            c++;
    }

    cout<<"size:   "<<mm.size()<<" "<<m2.size()<<endl;;

    for(mi::iterator it=mm.begin();it!=mm.end();it++){
        x=it->first;
        if(m2.find(x)==m2.end())
            cout<<x<<endl;
    }
    cout<<c<<endl;

    return 0;
}
