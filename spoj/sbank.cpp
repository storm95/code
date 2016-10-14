#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    string str;
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        map<string,int> mp;
        while(n--){
            getline(cin,str);
            mp[str]+=1;
        }

        map<string,int>::iterator it;
        it = mp.begin();
        while(it!=mp.end()){
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
        mp.clear();
        printf("\n");
    }
    return 0;
}
