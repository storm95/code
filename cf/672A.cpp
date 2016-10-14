#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
   // ios::sync_with_stdio(false);
    string x="";
    for(int i=1;i<=10000;i++){
        x.append(to_string(i));
    }
    int n;
    cin>>n;
    cout<<x[n-1]<<endl;

    return 0;
}
