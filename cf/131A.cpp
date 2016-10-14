#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    int len = str.length();
    for(int i=1;i<len;i++){
        if(str[i]>='A' && str[i]<='Z')continue;
        else{
            cout<<str<<endl;
            return 0;
        }
    }

    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){cout<<(char)(str[i]+32);}
        else cout<<(char)(str[i]-32);
    }
    cout<<endl;
    return 0;
}
