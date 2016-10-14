#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int lcs[6101][6101];
int main(){
    ios::sync_with_stdio(false);
    int t,len;
    cin>>t;
    string str,rev;
    while(t--){
        cin>>str;
        rev=str;
        len=str.length();
        reverse(rev.begin(),rev.end());

        for(int i=0;i<=len;i++){
            for(int j=0;j<=len;j++){
                if(i==0||j==0)lcs[i][j]=0;
                else if(str[i-1]==rev[j-1]){
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                }
                else{
                    lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
                }
            }
        }
        //cout<<lcs[len][len]<<endl;
        cout<<len-lcs[len][len]<<endl;
    }
    return 0;
}
