#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

        ios::sync_with_stdio(false);
        int n,x;
        cin>>n>>x;
        int tmp,sum=0;
        for(int i=0;i<n;i++){
                cin>>tmp;
                sum+=tmp;
        }
        sum = abs(sum);
        tmp = sum/x;
        if(sum%x != 0)tmp+=1;
        
        cout<<tmp<<endl;

        return 0;
}
