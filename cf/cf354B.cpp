#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    lli n,t;
    cin>>n>>t;
    lli v = (long long )pow(2,n);
    lli tot = v*t;
    //cout<<tot<<endl;
    int arr[1000000]={0};
    int lev = 1;
    arr[1]=tot;
    int i=1,cnt=0;
    while(lev<=n){
        int lim=i+lev;
        for(;i<lim;i++){
            //cout<<arr[i]<<" ";
            if(arr[i]>=v){
                cnt+=1;
                arr[i]-=v;
                arr[i+lev]+=arr[i]/2;
                arr[i+lev+1]+=arr[i]/2;
            }
        }
        //cout<<"                                       "<<i<<" "<<lev<<" "<<lev+1<<endl;
        //i=i+lev;
        lev+=1;
    }
    //cout<<endl;
    //for(int i=0;i<10;i++)cout<<arr[i]<<" ";//<<endl;
    cout<<cnt<<endl;
    return 0;
}
