#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
    double a,b,n,x,y,v,xa,yb,t;
    cin>>a>>b;
    cin>>n;
    double ans = INT_MAX;
    while(n--){
        cin>>x>>y>>v;
        xa = pow((x-a),2);
        yb = pow((y-b),2);
        t = (sqrt(xa+yb))/v;
        ans = min(ans,t);
    }
    cout<<setprecision(20)<<ans<<endl;
	return 0;
}
