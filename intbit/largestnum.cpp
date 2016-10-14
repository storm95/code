#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string x;string y;
    cin>>x>>y;
    string xy = x.append(y);
    string yx = y.append(x);
    cout<<(xy>yx)<<endl;
}
