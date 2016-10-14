#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool cmp(int a,int b){
    return a>b;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    long long int arr[n];
    set<long long int> qu;
    long long int tot =0,curr;
    for(int i=0;i<n;i++){
        cin>>curr;
        while(qu.find(curr)!=qu.end() && curr >0){curr-=1;}
        qu.insert(curr);
        tot+=curr;
    }
    cout<<tot<<endl;

    return 0;
}

