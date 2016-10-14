#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,dig;
    int x=1;
    cin>>n;
    int num=n;
    if(num==0){
        cout<<"O-|-OOO"<<endl;
        return 0;
    }
    else{
        while(num>0){
            dig = num%10;
            if(dig<5){
                cout<<"O-|";
                for(x=1;x<=dig;x++){
                    cout<<"O";
                }
                cout<<"-";
                //cout<<x<<" "<<4-dig;
                for(x=1;x<=4-dig;x++){cout<<"O";}
            }
            else if(dig>=5){
                cout<<"-O|";
                dig=dig-5;
                for(x=1;x<=dig;x++){cout<<"O";}
                cout<<"-";
                for(x=1;x<=4-dig;x++){cout<<"O";}
            }
            cout<<endl;
            num=num/10;
        }
    }
}
