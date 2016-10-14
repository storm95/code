#include<bits/stdc++.h>
using namespace std;
int f[100][100];
int main()
{
    int n,m,cnt=1;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
            return 0;
        string str1,str2;
        vector<pair<string ,string> > v;
        set<string> s;
        map<string,int> mp;
        for(int i=0;i<m;i++)
        {
            cin>>str1>>str2;
            s.insert(str1);
            s.insert(str2);
            v.push_back(make_pair(str1,str2));
        }
        int z=1;
        for(set<string>::iterator it=s.begin();it!=s.end();it++)
        {
            mp[*it]=z;
            z++;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                f[i][j]=INT_MAX;
        }
        for(int i=0;i<m;i++)
        {
            int x=mp[v[i].first];
            int y=mp[v[i].second];
            f[x][y]=1;
            f[y][x]=1;
        }
        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(f[i][k]!=INT_MAX && f[k][j]!=INT_MAX)
                        f[i][j]=min(f[i][j],(f[i][k]+f[k][j]));
                }
            }
        }
        int mx=-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++){
                 //   cout<<f[i][j]<<"  ";
                mx=max(mx,f[i][j]);
            }
           // cout<<endl;
        }
        if(mx==INT_MAX)
            printf("Network %d: DISCONNECTED\n",cnt++);
        else
            printf("Network %d: %d\n",cnt++,mx);
    }
}
