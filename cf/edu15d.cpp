#include<iostream>
#include<bits/stdc++.h>

#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    lli d,k,a,b,t;
    cin>>d>>k>>a>>b>>t;
    lli tot = 0;
    if(d<=k){
        cout<<(lli)d*a<<endl;
    }
    else{
        lli dist = d-k;
        lli cnt = dist/k;
        lli rem = dist%k;
        tot = k*a;
        tot+=min( (((t*cnt)+(a*k*cnt)) + min((rem*b), (t+(a*rem)))), b*dist);
        cout<<tot<<endl;
    }
    return 0;
}
