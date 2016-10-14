#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string a,b,c;
    int ac[30]={0}; int bc[30]={0}; int cc[30]={0};
    cin>>a>>b>>c; int l1= a.length(),l2= b.length(), l3= c.length();
    for(int j=0;j<l1;j++){
        ac[a[j]-'a']+=1;
    }
    for(int j=0; j<l2; j++){
        bc[b[j]-'a']+=1;
    }
    for(int j=0; j<l3; j++){
        cc[c[j]-'a']+=1;
    }

    int totb=INT_MAX,totc=INT_MAX;
    for(int i=0;i<26;i++){
        if(bc[i]>0)totb=min(totb,(ac[i]/bc[i]));
    }
    int fb=totb,fc=0,ans=fb+fc;
    for(int i=0;i<=totb;i++){
            for(int j=0;j<26;j++){
                if(cc[j]>0){
                    totc = min(totc,((ac[j]-(i*bc[j]))/cc[j]));
                }
            }
            if((i+totc)>=ans){
                fb=i;
                fc=totc;
                ans=fb+fc;
            }
    }
    for(int i=0;i<fb; i++){cout<<b;}
    for(int i=0;i<fc; i++){cout<<c;}
    for(int i=0;i<26;i++){
        int del = (fb*bc[i]) + (fc*cc[i]);
        ac[i]-=del;
        for(int j=0;j<ac[i];j++){char ch = (char)i+'a'; cout<<ch;}
    }
    cout<<endl;


    return 0;
}
