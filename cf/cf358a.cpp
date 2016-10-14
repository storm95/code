#include<iostream>
#include<bits/stdc++.h>

#define vi vector<int>
#define vvi vector< vector<int> >
#define pb push_back
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    if(n>m)swap(n,m);
    int tmp = m;
    lli cnt=0;
    int r,k,f;
    for(int i=1;i<=min(n,m);i++){
        k = i/5;
        f = (k+1)*5;
        r=f-i;
        if(r<=m && r>=0){
            cnt+=1;
        }
        cnt+=(tmp-r)/5;
    }
    cout<<cnt<<endl;
    return 0;
}
