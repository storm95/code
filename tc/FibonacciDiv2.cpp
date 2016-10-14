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

class FibonacciDiv2 {
public:
	int find(int);
};
int fibo[1000005]={0};

int FibonacciDiv2::find(int N) {
	fibo[0]=0;
	fibo[1]=1;
	int i=1;
	int ans=0;
	while(fibo[i]<=N){
		if(fibo[i+1]==0){
			fibo[i+1]=fibo[i]+fibo[i-1];
		}
		ans = abs(fibo[i]-N);
		i+=1;
	}
	ans = min(ans,fibo[i]-N);
	return ans;
}


//Powered by [KawigiEdit] 2.0!
