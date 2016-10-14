#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    string str;
    while(n--){
        cin>>str;
        int len = str.length();
        if(len<=10){cout<<str; continue;}
        else{
            cout<<str[0]<<len-2<<str[len-1]<<endl;
        }
    }
    return 0;
}
