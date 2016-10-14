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
#include<bits/stdc++.h>


using namespace std;

class SRMCards {
public:
	int maxTurns(vector <int>);
};

int SRMCards::maxTurns(vector <int> cards) {
	sort(cards.begin(),cards.end());
	int turn=0;
	//bool makr[500]={false};
	vector<int>:: iterator it ;
	for(it = cards.begin(); it!=cards.end();it+=1){
		if(*(it+1)-*it == 1)it+=1;
		turn+=1;
	}
	return turn;
}


//Powered by [KawigiEdit] 2.0!
