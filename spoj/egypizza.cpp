#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,cnt=0;
    cin>>n;//scanf("%d\n",&n);
    string str;
    int half=0,onefourth=0,threefourth=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[0]=='3')threefourth++;
        else if(str[0]=='1' && str[2]=='2')half++;
        else onefourth++;
    }

    cnt+=half/2;
    half = half%2;
    int tmp;
    if(half!=0){
        if(onefourth>2){
            cnt+=1;
            half-=1; onefourth-=2;
        }
        if(onefourth<=2){
            cnt+=1;
            half-=1; onefourth=0;
        }
    }

    if(onefourth>=threefourth){
        onefourth-=threefourth;
        cnt+=threefourth;
        threefourth=0;
        cnt+=onefourth/4;
        onefourth=onefourth%4;
        if(onefourth!=0)cnt+=1;
    }
    else if(onefourth<threefourth){
        cnt+=threefourth;
        threefourth=0;
    }
    cout<<cnt+1<<endl;


    return 0;
}
