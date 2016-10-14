#include<iostream>
#include<bits/stdc++.h>

#define lli long long int

using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    lli n;
    cin>>n;
    lli steps = n/5;
    if(n%5!=0)steps+=1;
    cout<<steps<<endl;
    return 0;

}
