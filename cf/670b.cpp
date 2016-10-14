#include<iostream>
#include<bits/stdc++.h>

#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    lli k;
    vector<lli>arr(100005,0);
    for(int i=1;i<100005;i++){
        arr[i]=arr[i-1]+i;
    }
    cin>>n>>k;
    lli inp[n+5];
    for(int i=1;i<=n;i++){
        cin>>inp[i];
    }
    vector<lli>::iterator it;
    it = lower_bound(arr.begin(),arr.end(),k);
    lli x = (lli)(it-arr.begin());
    //cout<<x<<" "<<arr[x]<<endl;
    lli low = (x*(x-1))/2L;
    //cout<<low<<endl;
    cout<<inp[(int)(k-low)]<<endl;


    return 0;
}
