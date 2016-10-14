#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>


using namespace std;

class BinaryCode {
public:
	vector <string> decode(string);
};

vector <string> BinaryCode::decode(string inp) {
	vector <string> ans;
	inp = inp;
	string no = "NONE";
	int len = inp.length(),flag =1;
	char str[len+3];
	str[0]='0', str[1]='0';
	stringstream ss;
	ss<<str[1];
	for(int i=2;i<=len;i++){
		str[i] = inp[i-2] - ( str[i-2] + str[i-1] - '0' ) + '0' ;
		cout<<(char)str[i-2]<<" "<<str[i-1]<<" "<<str[i]<<" "<<(str[i-2] + str[i-1] + str[i]- '0' - '0')<<"     "<<inp[i-2]<<endl;
		if((str[i]<'0' || str[i]>'1') || inp[i-2] != (str[i-2] + str[i-1] + str[i]- '0' - '0') ){
			ans.push_back(no);
			flag =0;
			break;
		}
		ss<<str[i];
	}
	if(flag ==1 && inp[len-1] != (str[len-1] + str[len] - '0') ){
			ans.push_back(no);
			flag =0;
	}
	if(flag==1){
		ans.push_back(ss.str());
	}
	
	flag =1 ;
	stringstream sp;
	str[0]='0', str[1]='1';
	sp<<str[1];
	for(int i=2;i<=len;i++){
		str[i] = inp[i-2] - ( str[i-2] + str[i-1] - '0' ) + '0' ;
		//cout<<(char)str[i-2]<<" "<<str[i-1]<<" "<<str[i]<<" "<<(str[i-2] + str[i-1] + str[i]- '0' - '0')<<"     "<<inp[i-2]<<endl;
		if((str[i]<'0' || str[i]>'1') || inp[i-2] != (str[i-2] + str[i-1] + str[i]- '0' - '0') ){
			ans.push_back(no);
			flag =0;
			break;
		}
		sp<<str[i];
	}
	if(flag ==1 && inp[len-1] != (str[len] + str[len-1] - '0') ){
			ans.push_back(no);
			flag =0;
	}
	//sp<<endl;
	if(flag==1){
		ans.push_back(sp.str());
	}
	
	return ans;
}


//Powered by [KawigiEdit] 2.0!
