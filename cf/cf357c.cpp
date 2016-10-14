#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int nn;
    cin>>nn;
    string op; int n;
    multiset<int>mp;
    multiset<int>::iterator it;
    vector< pair<string,int> >ans;
    for(int i=0;i<nn;i++){

        cin>>op;
        if(op!="removeMin")cin>>n;

        if(op=="insert"){
            mp.insert(n);
        }
        else if(op=="getMin"){
           // cout<<mp.size()<<endl;
            if(mp.empty()){
                ans.push_back(make_pair("insert",n));
                mp.insert(n);
            }
            else{
                it = mp.begin();
                if(*it < n){
                    while(!mp.empty() && *(mp.begin())<n ){
                        it=mp.begin();
                        ans.push_back(make_pair("removeMin",-1));
                        //cout<<"erasin "<<*it<<endl;
                        mp.erase(it);
                    }
                }
                //if(mp.empty())cout<<"khali"<<endl;
                if(mp.empty() || *(mp.begin())>n){
                    ans.push_back(make_pair("insert",n));
                    mp.insert(n);
                }
            }
        }
        else if(op == "removeMin"){
            if(mp.empty()){
                ans.push_back(make_pair("insert",1000000000));
            }
            else{
                it = mp.begin();
                mp.erase(it);
            }
        }
        ans.push_back(make_pair(op,n));
    }

    int s = ans.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        if(ans[i].first == "removeMin"){
            cout<<"removeMin"<<endl;
        }
        else{
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}

