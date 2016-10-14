#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> getlps(string ned){
    int n=ned.length();
    vector<int>lps(n,0);
    int index=0;
    for(int i=1;i<n;){
        if(ned[i]==ned[index]){
            lps[i]=index+1;
            i++;
            index++;
        }
        else{
            if(index==0){
                lps[i]=0;
                i++;
            }
            else{
                index=lps[index-1];
            }
        }
    }x
    return lps;
}
int main(){
    ios::sync_with_stdio(false);
    string hay,ned;
    cin>>hay>>ned;
    int n = ned.size();
    int m = hay.size();
    vector<int>lps(getlps(ned));

    int st = -1;
    int j=0;
    for(int i=0;i<m;){
        if(hay[i]==ned[j]){
            i++;j++;
            if(j==n){
                st=i-n;
                break;
            }
        }
        else{
            if(j==0){
                i++;
            }
            else{
                j=lps[j-1];
            }
        }

    }
    cout<<st<<endl;
    return 0;
}
