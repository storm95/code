#include <cstdio>
#include <queue>
#include <vector>
#include <utility>
#include <climits>
#define inf INT_MAX
#define pii pair<int,int>

#define pb push_back
#define mp make_pair
using namespace std;


int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        vector<int>adj[150];
        int n,no,f;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&no);
            for(int j=0;j<no;j++){
                scanf("%d",&f);
                adj[i].pb(f);
            }
        }
        int res = -1;
        int ans = INT_MAX;
        int flag = 0;
        for(int i=1;i<=n;i++){
            bool vis[150]={false};
            queue<pii>qu;
            int frnds = 0;
            qu.push(mp(i,0));
            int tmp = 0 ;
            int v,click,cur;
            while(!qu.empty()){
                v = qu.front().first; click = qu.front().second;
                qu.pop();

                if(vis[v]==true)continue;

                tmp+=click;
                int vlen = adj[v].size();
                vis[v]=true;
                frnds+=1;
                for(int j=0;j<vlen;j++){
                    cur = adj[v][j];
                    if(vis[cur]==false){
                        qu.push(mp(cur,click+1));
                    }
                }

            }
            if(frnds==n && tmp<ans ){
                res = i;
                ans=tmp;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
