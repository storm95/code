#include<iostream>
#include<bits/stdc++.h>

using namespace std;
string a,b;
bool check(string str, int len){
    int n = str.length();

    for(int i=0;i<n;i++){
        if(a[i%len]!=str[i])return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b;
    int n1 = a.length();
    //cout<<n1<<endl;
    int n2 = b.length();
    int cnt =0;
    for(int i=1;i<=n1;i++){
        if(n1%i==0){
            if(n2%i==0){
                if(check(a,i)){
                    if(check(b,i)){
                        cnt+=1;
                    }
                }
            }
        }
    }

    cout<<cnt<<endl;
    return 0;
}
