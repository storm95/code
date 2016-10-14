#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    long long int ans;
    int diff;
    if(a!=d && b!=c){ans=0;}
    else if(a==d&&b==c){ans=n*n;}
    else {
        if(a==d)diff=abs(b-c);
        else if(b==c)diff=abs(a-d);

        ans=(n-diff)*n;
    }
    cout<<ans<<endl;
    return 0;


}
