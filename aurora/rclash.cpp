#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,s1,s2,t1,t2,d1,d2;
    cin>>t;
    while(t--){
        cin>>s1>>t1>>d1;
        cin>>s2>>t2>>d2;
        bool mark[1005]={false};
        int flag=0;
        for(int i=1;i<=t1;i++){
            mark[s1]=true;
            s1+=d1;
        }
        for(int i=1;i<=t2;i++){
            if(mark[s2]){
                cout<<"Agar Tum Sath Ho"<<endl;
                flag=1;
                break;
            }
            s2+=d2;
        }
        if(flag==0){
            cout<<"Kuch Kuch Hota Hai"<<endl;
        }

    }
    return 0;
}
