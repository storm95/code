#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt =0,len;
    string str;
    cin>>str;
    int ans;
    int x=1;
    while(str[0]!='-'){
        len = str.length();
        ans=0;cnt=0;
        for(int i=0;i<len;i++){
            if(str[i]=='{'){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
            if(cnt<0){
                cnt=1;
                ans+=1;
            }
        }
        ans+=cnt/2;
        printf("%d. %d\n",x,ans);
        x+=1;
        cin>>str;
    }
    return 0;

}
