#include<bits/stdc++.h>

int a[20009],f[20009];
bool cmp(std::pair<int,int> a,std::pair<int,int> b)
{
    return (a.first+a.second)<(b.first+b.second);
}

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y;
        scanf("%d",&n);
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++){
                scanf("%d %d",&x,&y);
            v.push_back(make_pair(x,y));
            sort(v.begin(),v.end(),cmp);
        }
        for(int i=0;i<n;i++){
            f[i]=1;
            a[i]=i;
            gr[i]=i;
            sm[i]=i;
        }

        for(int i=1;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(v[j].first<v[i].first && v[j].second<v[i].second && v[j].first<v[i].first && v[j].second<v[i].second && f[i]1)
                {
                    f[i]=f[j]+1;
                    a[i]=j;
                    sm[i]=j;
                    gr[j]=i;
                }

            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==i)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
