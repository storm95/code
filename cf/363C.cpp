#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    int len = s.length();
    if(len<=2){
        cout<<s<<endl;
        return 0;
    }
    else{
        string ans="[";
        ans=ans+s[0]+s[1];
        cout<<ans<<endl;
        int l=3;
        for(int i=2;i<len;i++){
            if(s[i]==ans[l-1] && s[i]==ans[l-2]){continue;}
            else if(s[i]==ans[l-1] && ans[l-2]==ans[l-3]){continue;}
            else{
                ans+=s[i];l+=1;
            }
        }
        for(int i=1;i<l;i++){
            cout<<ans[i];
        }
        cout<<endl;
        return 0;
    }
}
