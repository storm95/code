#include<bits/stdc++.h>
using namespace std;


string solve(string S, string T){
    if (S.length() < T.length()) return "";
    unordered_map<char, int> counts;
    for (int i = 0; i < T.length(); i++) {
        if (counts.find(T[i]) == counts.end()) {
            counts[T[i]] = 1;
        } else {
            counts[T[i]]++;
        }
    }
    int start = 0;
    int length = 0;
    int total = 0;
    for (int head = 0, tail = 0; tail < S.length(); tail++) {
        auto itTail = counts.find(S[tail]);
        if (counts.find(S[tail]) == counts.end()) {
            continue;
        }
        counts[S[tail]]--;
        if (counts[S[tail]] >= 0) {
            total++;
        }
        if (total == T.size()) {
            while (counts.find(S[head]) == counts.end() || counts[S[head]] < 0) {
                if (counts.find(S[head]) != counts.end()) counts[S[head]]++;
                head++;
            }
            if (length == 0 || tail - head + 1 < length) {
                length = tail - head + 1;
                start = head;
            }
        }
    }
    return S.substr(start, length);
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    string st;
    cin>>st;
    string str=st;
    sort(str.begin(),str.end());
    string t="";
    t+=str[0];
    //int n = str.length();
    for(int i=1;i<n;i++){
        if(t[t.length()-1]!=str[i]){
            t+=str[i];
        }
    }
    string ans = solve(st,t);
    cout<<ans.length()<<endl;
    return 0;
}
