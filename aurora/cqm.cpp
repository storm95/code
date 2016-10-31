#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(false);

    vector<int> five;
    int temp = 0;
    for(int i=0; temp<5000050 ; i++)
    {
        temp+=5;
        five.push_back(temp);
    }

    long long n,m,l=0,r=0, ans=0;

    cin>>n>>m;
//cout<<five[500000]<<endl;
    for(int i=1;i<=n;i++)
    {
        r = lower_bound(five.begin(), five.begin()+five.size(), m+i)-five.begin() ;
        if(five[r] > m+i)
            r--;

        l=upper_bound(five.begin(), five.begin()+five.size(), i)-five.begin() ;
        //if(five[l] == i)
          //  l++;
        if(r>=l)
        ans += r-l+1;
    }
    cout<<ans;

    return 0;
}
