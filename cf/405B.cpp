#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,cnt=0;
    cin>>n;
    string st;
    cin>>st;
    int lptr=-1,rptr=-1;
    for(int i=0;i<n;i++){
        if(st[i]=='L'){
            lptr=i;
            if(rptr !=-1 && rptr<lptr){
                if((lptr-rptr)%2==0){cnt+=1;}//cout<<"adding middle"<<endl;}
            }
        }
        else if(st[i]=='R'){
            rptr=i;
            if(lptr!=-1 && lptr<rptr){
                cnt+=(rptr-lptr-1);
                //cout<<"total"<<endl;
            }
        }
    }
    int flag =0;
    int tmp =0;
    for(int i=0;i<n;i++){
        if(st[i]=='.'){
            tmp+=1;
        }
        else if(st[i]=='R'){
            cnt+=tmp;
            //cout<<"beg"<<endl;
            flag=1;
            break;
        }
        else if(st[i]=='L'){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cnt+=tmp;
        //cout<<"all"<<endl;
    }
    tmp=0;
    for(int i=n-1;i>=0;i--){
        if(st[i]=='.'){
            tmp+=1;
        }
        else if(st[i]=='L'){
            cnt+=tmp;
            //cout<<"end"<<endl;
            break;
        }
        else{
            break;
        }
    }

    cout<<cnt<<endl;
    return 0;

}
