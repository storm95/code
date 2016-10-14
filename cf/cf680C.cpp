#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string res;
    int cnt=0;
    //ios::sync_with_stdio(false);
    int fac[19]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 4, 9, 25, 49 };
    for(int i=0;i<19;i++){
        cout<<fac[i]<<endl;
        fflush(stdout);
        cin>>res;
        if(res=="yes"){
            cnt+=1;
            if(cnt>=2){
                cout<<"composite"<<endl;
                fflush(stdout);
                return 0;
            }
        }
    }
    cout<<"prime"<<endl;
    fflush(stdout);
    return 0;
}
