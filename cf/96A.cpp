#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    int len = str.length();
    char c = str[0];
    int cnt=1;
    for(int i=1;i<len;i++){
        if(str[i]==c)cnt+=1;
        else{
            c=str[i];
            cnt=1;
        }
        if(cnt>=7){cout<<"YES"<<endl; return 0;}
    }
    cout<<"NO"<<endl;

    return 0;
}
