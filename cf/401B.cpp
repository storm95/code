#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int x,k;
    cin>>x>>k;
    int n0,n1,n2,count=0;
    bool mark[4001]={false};
    mark[x]=true;
    for(int i=0;i<k;i++){
        cin>>n0;
        if(n0==1){
            cin>>n1>>n2;
            count+=2;
            mark[n1]=true;
            mark[n2]=true;
        }
        else {
            cin>>n1;
            count+=1;
            mark[n1]=true;
        }
    }

    int maxx=x-count-1;
    int minn=0;
    
    for(int i=1;i<x;i++){
        if(mark[i]==false){
            if(mark[i+1]==false){
                i+=1;
            }
            minn+=1;
        }
    }

    cout<<minn<<" "<<maxx<<endl;
    return 0;
}

    


