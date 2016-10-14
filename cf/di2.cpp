#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt(string a, string b){
    int ua=0,ub=0;
    int n = a.length();
    vector<int>buc1(27,0);
    vector<int>buc2(27,0);
    for(int i=0;i<n;i++){
        if(buc1[a[i]-'a']==0)ua+=1;
        if(buc2[b[i]-'a']==0)ub+=1;
        buc2[b[i]-'a']+=1;buc1[a[i]-'a']+=1;
    }
    return max(ua,ub);
}
int main(){
  //  ios::sync_with_stdio(false);
    char tmp;
    int t,c;
    cin>>t;
    while(t--){
        int n; string a,b,tmpa,tmpb;
        cin>>n;
        int lim = (1<<n);
        cin>>a>>b;
        int ans = cnt(a,b);
        //cout<<lim<<endl;
        for(int i=0;i<=lim;i++){
            c=i;
            tmpa=a,tmpb=b;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    tmp=tmpa[j]; tmpa[j]=tmpb[j]; tmpb[j]=tmp;
                }
            }
            //cout<<cnt(tmpa,tmpb)<<endl;
            ans = min(ans,cnt(tmpa,tmpb));
        }
        cout<<ans<<endl;
    }
    return 0;
}
