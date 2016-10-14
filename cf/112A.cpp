#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str1,str2;
    cin>>str1>>str2;
    int len = str1.length();
    for(int i=0;i<len;i++){
        str1[i]=toupper(str1[i]);
        str2[i]=toupper(str2[i]);
    }
    if(str1<str2)cout<<-1<<endl;
    else if(str1==str2)cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}
