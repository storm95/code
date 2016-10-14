#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char pat[10000000],str[10000000];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;

    while(scanf("%d",&n)!=EOF){
        scanf("%s%s",pat,str);
        int pref[n]={0};
        int l=0,r=1;
        while(r<n){
            if(pat[l]==pat[r]){
                pref[r]=l+1;
                l+=1;r+=1;
            }
            else if(l>0){
                l=pref[l-1];
            }
            else{
                pref[r]=0;
                r+=1;
            }
        }
        int msofar=0,x=0;
        int i=0;
        while(str[i]!='\0'){
            if(str[i]==pat[x]){
                msofar+=1;
                x+=1;//i+=1;
            }
            else{
                if(x!=0){
                    i-=1;
                    x=pref[x-1];
                    msofar=x;
                }
            }
            if(msofar==n){
                printf("%d\n",i-n+1);
                x=pref[x-1];
                msofar=x;//i+=1;
            }
            i+=1;
        }
        printf("\n");
    }
    return 0;
}
