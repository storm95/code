#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int main(){

    int a,b;
    cin>>a>>b;
    int p=0,q=0,r=0,aw=0,bw=0;
    for(int x =1 ;x<=6;x++){
        aw = abs(a-x);
        bw = abs(b-x);
        if(aw<bw)p+=1;
        else if (aw==bw)q+=1;
        else r+=1;
    }

    cout<<p<<" "<<q<<" "<<r<<endl;


    return 0;
}
