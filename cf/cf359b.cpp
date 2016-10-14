#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>sarr(arr);

    sort(sarr.begin(),sarr.end());

    for(int i=0;i<n;i++){
        if(arr[i]!=sarr[i]){
            int j=i;
            for(;j<n;j++){
                if(arr[j]==sarr[i]){break;}
            }
            int r=j;
            while(r!=i){
                cout<<r-1+1<<" "<<r+1<<endl;
                swap(arr[r],arr[r-1]);
                r-=1;
            }
        }
    }
    return 0;
}
