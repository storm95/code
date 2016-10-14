#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
using namespace std;

#define clr(x,a) memset(x,a,sizeof(x))

vector<int>adj[1005];
vector<int>radj[1005];
int kk=0,mk[1005],idx=0;
stack<int> st;
vector<int> u[1005];

int dfs(int x){
    mk[x]=1;
    int i;
    for(i=0;i<adj[x].size();i++){
        if(!mk[adj[x][i]])
            dfs(adj[x][i]);
    }
    st.push(x);
}

int dfss(int x){
    mk[x]=1;
    int i;
    u[kk].pb(x);
    for(i=0;i<radj[x].size();i++){
        if(!mk[radj[x][i]])
            dfss(radj[x][i]);
    }
}

int solve(){
    clr(mk,0);
    int i;
    for(i=0;i<=idx;i++){
        if(!mk[i])
            dfs(i);
    }
    clr(mk,0);
    kk=0;
    while(!st.empty()){
        int x=st.top();
        st.pop();
        if(!mk[x]){
            dfss(x);
            kk++;
        }
    }
    for(i=0;i<=kk;i++){
        if(u[i].size()>1)
            return 1;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        idx=0;
        string str;
        cin>>n;
        map<string,int>mp;
        map<pair<int,int>,int>edge;
        vector<string>vec;
        getchar();
        for(int j=0;j<n;j++){
            str.clear();
            getline(cin,str);
            int len = str.length();
            string s = "";
            int cur,pre = 0;
            for(int i=0;i<len;i++){
                if(str[i]==','){
                    if(mp.find(s)==mp.end()){
                        mp[s]= ++idx;
                        vec.pb(s);
                    }
                    cur = mp[s];
                    if(edge.find(make_pair(pre,cur))==edge.end()){adj[pre].pb(cur);radj[cur].pb(pre); edge[make_pair(pre,cur)]=1;}
                    s.clear();
                    pre=cur;
                }
                else{
                    s+=str[i];
                }
            }
            if(s.size()){
                if(mp.find(s)==mp.end()){
                    mp[s] = ++idx;
                    vec.pb(s);
                }
                cur = mp[s];
                if(edge.find(make_pair(pre,cur))==edge.end()){adj[pre].pb(cur);radj[cur].pb(pre); edge[make_pair(pre,cur)]=1;}
                s="";
                pre=cur;
            }

        }

        if(solve())
            cout<<"ORDER VIOLATION";
        else
            cout<<"ORDER EXISTS";
        cout<<endl;
       for(int i=0;i<=1001;i++){
            adj[i].clear();
            radj[i].clear();
            u[i].clear();
        }
    }
    return 0;
}
