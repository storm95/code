#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        map<string,int> mp;
        string str;
        int n,k;
        cin>>str;
        int len = str.length();
        cin>>n>>k;
        for(int i=0;i<len;i++){
            for(int j=1;j<=len-i;j++){
                string tmp = str.substr(i,j);
                mp[tmp]+=1;
            }
        }
        map <string,int>::iterator it;
        int cnt =0,flag =0;
        for(it=mp.begin();it!=mp.end();it++){
            //cout<<it->first<<"    "<<it->second<<endl;
            if(it->second >= n)cnt+=1;
            if(it->second >= n && cnt == k){cout<<it->first<<endl; flag =1; break;}

            else continue;
        }
        if(flag==0)cout<<"-1"<<endl;

    }
    return 0;
}
