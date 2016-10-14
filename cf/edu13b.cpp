#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool isleap(int year){
    if(year%400==0)return true;
    else if(year%4==0){
        if(year%100==0)return false;
        else return true;
    }
    else return false;
}
int main(){
    ios::sync_with_stdio(false);

    int y;
    cin>>y;
    if(isleap(y)){
        int cnt = 0;
        while(true){
            y+=1;
            if(isleap(y))cnt+=2;
            else cnt+=1;
            if(cnt%7==0 && isleap(y)){
                cout<<y<<endl;
                break;
            }
        }
    }
    else{
        int cnt =0;
        while(true){
            y+=1;
            if(isleap(y))cnt+=2;
            else cnt+=1;
            if(cnt%7==0 && !isleap(y)){
                cout<<y<<endl;
                break;
            }
        }
    }


    return 0;
}
