#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int tmp = n;
        vector<int>ans;
        int flag=0;
        while(tmp>1){
            int f=9;
            while(f>1){
                if(tmp%f==0){
                    tmp=tmp/f;
                    ans.pb(f);
                }
                else f--;
            }
            if(f==1 && tmp!=1){
                cout<<-1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            int sz =ans.size();
            for(int i= sz-1; i>=0;i--){
                cout<<ans[i];
            }
            cout<<endl;
        }
    }

    return 0;
}
