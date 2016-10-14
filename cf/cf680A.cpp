#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int cnt[110]={0};
    int sum=0,diff=0,tmp;
    for(int i=0;i<5;i++){
        cin>>tmp;
        cnt[tmp]+=1;
        sum+=tmp;
    }
    for(int i=0;i<101;i++){
        if(cnt[i]>=2){
            diff = max(diff, min(3,cnt[i])*i);
        }
    }
    cout<<sum-diff;
    return 0;
}
