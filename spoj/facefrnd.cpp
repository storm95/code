#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,tmp;
    set<int>frnds;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&tmp,&m);
        frnds.insert(tmp);
        for(int j=0;j<m;j++){
            scanf("%d",&tmp);
            frnds.insert(tmp);
        }
    }
    int len = frnds.size();
    printf("%d",len-n);
    return 0;

}
