#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,tmp,minpos=0,maxpos=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp==1){minpos=i;}
        else if(tmp==n){maxpos=i;}
    }
    int ans = max(abs(0-maxpos) ,abs(0-minpos));
    int ans2 =max(abs(n-1-minpos), abs(n-1-maxpos));
    ans=max(ans,ans2);
    cout<<ans<<endl;
    return 0;
}
