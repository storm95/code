#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    int dur[n];
    int typ[n];
    for(int i=0;i<n;i++){cin>>dur[i];}
    for(int i=0;i<n;i++){cin>>typ[i];}
    cin>>t;
    int ans =0;
    int lim = 1<<n;
    for(int i=0;i<lim;i++){
            vector<int>tmp;
            int cnt=0; int time=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    time+=dur[j];
                    tmp.push_back(typ[j]);
                    cnt+=1;
                }
                sort(tmp.begin(),tmp.end());
                for(int x=1;x<tmp.size();x++){
                    time+=abs(tmp[x]-tmp[x-1]);
                }
                if(time>t)continue;
                else ans=max(ans,cnt);
            }
    }
    cout<<ans<<endl;
    return 0;
}
