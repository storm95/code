#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll x;
	ll a[n],b[n];
	for (ll i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
		b[i]=x;
	}
	sort (b,b+n);
	//cout<<endl;
	ll l,r,temp;
	for (ll i=0;i<n;i++)
	{
		r=0;
		temp=a[i];
		for (ll j=i;j<n;j++)
		{
			if (temp==b[j])
			{
				r=j;
			}
		}
		//cout<<a[i]<<"'s position should be :"<<r+1<<endl;
		if (i!=r){
			for (int k=r-1;k>=i;k--)
			{
				cout<<k+1<<" "<<k+2<<endl;
				swap(a[k],a[k+1]);
			}
		 }

	}
	/*cout<<"new a[] is: "<<endl;;
	for (ll i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    */
	return 0;

}
