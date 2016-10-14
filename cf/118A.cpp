#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string str,tmp; cin>>str;
    int len = str.length();
    for(int i=0;i<len;i++){
        if(str[i]>=65 && str[i]<=65+25)str[i]+=32;
        if(str[i]=='a' || str[i]=='y' || str[i] =='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )continue;
        else tmp+=str[i];
    }
    string ans="";
    len = tmp.length();
    for(int i=0;i<len;i++){
        ans+='.';
        ans+=tmp[i];
    }
    cout<<ans<<endl;
    return 0;
}
