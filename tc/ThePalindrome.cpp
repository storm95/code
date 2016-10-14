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

using namespace std;

class ThePalindrome {
public:
	int find(string);
};

bool check(string str){
	int len = str.length();
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i])return false;
	}
	return true;
}

int ThePalindrome::find(string str) {
	string tmp =str;
	int len = str.length();
	if(check(str))return len;
	for(int i=0;i<len;i++){
		tmp = str;
		for(int j=i;j>=0;j--){
			tmp+=str[j];
		}
		if(check(tmp))return len+i+1;
	}
	return 2*len;
}


//Powered by [KawigiEdit] 2.0!
