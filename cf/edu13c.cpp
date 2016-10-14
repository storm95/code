#include<iostream>
#include<bits/stdc++.h>

#define lli long long int

using namespace std;

lli gcd(lli a, lli b) {
  lli r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(){
    ios::sync_with_stdio(false);

    lli n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    lli lcm;
    if(a<b){
        swap(a,b);
        swap(p,q);
    }
    lli hcf = gcd(a,b);
    //int flag=0;
    //lli tmp = a*b;
    lcm=(a/hcf)*b;
    //cout<<lcm<<endl;
    lli i1,i2,i3;
    i1 = n/a;
    i2 = n/b;
    i3 = n/lcm;
    //cout<<i1<<" "<<i2<<" "<<i3<<endl;
    lli ans= LONG_MIN;// ((p*i1)+(q*i2));
    if(p<q){
         //cout<<((i1-i3)*p)<<" "<<((i2-i3)*q)<<" "<<(i3*q)<<endl;

        ans= max(ans, ((i1-i3)*p) + ((i2-i3)*q) + (i3*q));
    }
    else {
        ans = max(ans, ((i1-i3)*p) + ((i2-i3)*q) + (i3*p));
    }
    cout<<ans<<endl;
    return 0;
}
