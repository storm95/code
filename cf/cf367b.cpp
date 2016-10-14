#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	int n;
    cin>>n;
    vector<int>shop(n,0);

    for(int i=0;i<n;i++){
        cin>>shop[i];
    }
    sort(shop.begin(),shop.end());
    vector<int>::iterator it;
    int q,m;
    cin>>q;
    while(q--){
        cin>>m;
        it= upper_bound(shop.begin(),shop.end(),m);
        cout<<it-shop.begin()<<endl;
    }
	return 0;

}
