#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>rem;
    int tmp;
    int rating=0;
    for(int i=0;i<n;i++){
        tmp= a[i]/10;
        rating+=tmp;
        if(tmp==10){continue;}
        else{
            rem.push_back(10 - (a[i]%10));
        }
    }

    sort(rem.begin(),rem.end());
    int len = rem.size();
    for(int i=0;i<len;i++){
        //cout<<rem[i]<<endl;
        if(k>=rem[i]){
            k-=rem[i];
            rating+=1;
        }
    }
    int max_rating = n*10;
    if(rating<max_rating){
        int add_rating  = k/10;
        if(add_rating+rating >max_rating){
            rating = max_rating;
        }
        else{
            rating+=add_rating;
        }
    }
    cout<<rating<<endl;
    return 0;
}
