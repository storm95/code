#include<iostream>
#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define lli long long INT_MAX


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    map<int,deque<int> >mp;
    int tmp;
    int sum = 0;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        mp[tmp].pb(i);
        sum+=tmp;
    }
    int ppl = n/2;
    int each = sum/ppl;
    map<int,deque<int> >::iterator it;
    it = mp.begin();
    while(it!=mp.end()){
        int cur = it->first;
        int tcur = each-cur;
        while(!mp[cur].empty()){
            cout<<mp[cur].front()<<" ";
            mp[cur].pop_front();
            cout<<mp[tcur].front()<<endl;
            mp[each-cur].pop_front();
        }
        it++;
    }
    return 0;

}
