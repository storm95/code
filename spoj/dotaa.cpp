#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,m,d,h,tmp,cnt;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&d);
        tmp=0;cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            cnt+=tmp/d;
            if(tmp%d==0)cnt-=1;
        }
        if(cnt>=m)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
