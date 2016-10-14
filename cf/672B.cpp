#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt=0,uni=0;
    int alph[30]={0};
    for(int i=0;i<n;i++){
        if(alph[(int)str[i]-97] > 0){
            //cout<<(int)str[i]-97<<endl;
            alph[(int)str[i]-97]+=1;
            cnt+=1;
        }
        else{
            alph[(int)str[i]-97]+=1;
            uni+=1;
        }
    }
    if(uni+cnt>26)cout<<-1<<endl;
    else cout<<cnt<<endl;
    return 0;
}
