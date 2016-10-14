#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main (){
        int a,b;
        cin>>a>>b;
        int ans=a;
        int f = a/b,r=a%b;
        while(f>=1){
                ans+=f;
                a=f+r;
                f=a/b;
                r=a%b;
        }
        cout<<ans<<endl;
        
        return 0;
}

        
