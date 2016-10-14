#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int city[10000000];
int n,b;

int check(int mid){
    int cnt=0;

    for(int i=0;i<n;i++){
        cnt+=((city[i]/mid));
        if((city[i]%mid) !=0 )cnt+=1;
        //cout<<"cnt"<<i<<" : "<<cnt<<endl;
    }
    return cnt;
}

int main(){
    scanf("%d%d",&n,&b);
    while(n!=-1 && b!=-1){
        for(int i=0;i<n;i++){
            scanf("%d",&city[i]);
        }

        int lo =1, high = 50000000,mid,box;
        while(lo<high){
            mid = (lo+high)/2;
            //cout<<"mid : "<<mid<<"  low : "<<lo<<"  high : "<<high<<endl;
            box = check(mid);
            //cout<<box<<endl;
            if(box<=b)high=mid;
            else if(box>b)lo=mid+1;
        }
        printf("%d\n",lo);
        scanf("%d%d",&n,&b);
    }
    //cout<<lo<<" "<<high<<" "<<mid<<endl;
    return 0;
}
