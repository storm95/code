#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using  namespace std;

int main() {
    ios::sync_with_stdio(false);
    lli n,x,d,distress=0;
    string p;
    cin>>n>>x;
    lli ice = x;
    for(lli i=0;i<n;i++){
        cin>>p>>d;
        if(p=="+"){
            ice+=d;
        }
        else{
            if(ice>=d){
                ice-=d;
            }
            else {
                distress+=1;
            }
        }
    }
    cout<<ice<<" "<<distress<<endl;

    return 0;
}
