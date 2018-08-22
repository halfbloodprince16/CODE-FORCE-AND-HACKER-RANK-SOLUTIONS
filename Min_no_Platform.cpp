#include"bits/stdc++.h"
using namespace std;

std::vector<pair<int,int>>v;
std::vector<pair<int,int>>::iterator itr;

int main(int argc, char const *argv[])
{
	int n,m;
	cout<<"Enter no. trains arriving and departing: ";
	cin>>n>>m;
	int i,j;
	int x[n],y[m];
	int haha;
	for(i=0;i<n;i++)
	{
		v.push_back(make_pair(haha,0));
	}
	for(i=0;i<m;i++)
	{
		v.push_back(make_pair(haha,1));
	}
	
	sort(v.begin(),v.end());
	cout<<v;

	return 0;
}