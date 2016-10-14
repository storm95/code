#include<iostream>
#include<bits/stdc++.h>

#define vi vector<int>
#define vvi vector< vector<int> >
#define pb push_back
#define lli long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            x+=1;
            arr[i]=x;
        }
    }
    //cout<<endl;
    cout<<arr[n-1]+1<<endl;
    return 0;
}
