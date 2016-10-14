#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int arr[101]={0};
    int tmp;
    for(int i=1;i<=m;i++){
        cin>>tmp;
        for(int j=tmp;j<=n;j++){
            if(arr[j]!=0)break;
            else arr[j]=tmp;
        }
    }
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
