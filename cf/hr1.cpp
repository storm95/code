#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mi;

#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pi(a) printf("%d\n",a)
#define nl printf("\n");
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,a,b) for(i=a;i>=b;i--)
#define clr(x,a) memset(x,a,sizeof(x))
#define MAX 1000100
#define MOD 1000000007

int n,m,a[MAX];
vector<int> v[1001],u[1001];
vector<int > w[MAX];
vector<string> loc;
map<string,int> m1,mm;
mi m2,mmm;
int zz=0,mk[200][200],dp[50][500000];

int solve(int i,int k){
    if(i==n){
        zz=max(zz,__builtin_popcount(k));
        return 0;
    }
    if(i>n)
        return 0;
    if(dp[i][k]!=-1)
        return dp[i][k];
    int j;
    f(j,0,n){
        if(!(k & 1<<j) && mk[j][i]){
            dp[i][k]=max(solve(i+1,k | 1<<j)+1,solve(i+1,k));
        }
        else
            dp[i][k]=solve(i+1,k);
    }
    return dp[i][k];
}

int main(){
    int r,k,i,c=0,x=0,y=0,j,t,l,z,x1=0,y1=0,prev;
    ll ans=0;string p,p1,p2,s;

    clr(dp,-1);
    si(n);
    c=0;
    f(i,0,n){
        si(x);
        si(y);
        f(j,0,y){
            cin>>p;
            if(mm.find(p)==mm.end())
                mm[p]=c++;
            v[i].pb(mm[p]);
            u[mm[p]].pb(i);
        }
    }
    f(i,0,n){
        si(y);
        f(j,0,y){
            cin>>p;
            if(mm.find(p)==mm.end())
                mm[p]=c++;
            w[i].pb(mm[p]);
        }
    }
    f(i,0,n){
        mmm.clear();
        f(k,0,w[i].size()){
            f(j,0,u[w[i][k]].size()){
                mmm[u[w[i][k]][j]]=1;
            }
        }
        for(mi::iterator it=mmm.begin();it!=mmm.end();it++){
            mk[i][it->first]=1;
        }
    }
    f(i,0,n){
        f(j,0,n){
            cout<<mk[i][j]<<" ";
        }
        nl;
    }
    solve(0,0);
    cout<<zz<<endl;
    return 0;
}
