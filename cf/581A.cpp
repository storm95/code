#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    int a,b,mx,mn;
    cin>>a>>b;
    if(a<=b){
        mx =a;
        mn = (b-a)/2;
    }
    else{
        mx = b ;
        mn = (a-b)/2;
    }
    cout<<mx<<" "<<mn<<endl;
}
