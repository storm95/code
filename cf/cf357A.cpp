#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string name;
    int before,after;
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>name>>before>>after;
        if(before>=2400 && after>before){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
