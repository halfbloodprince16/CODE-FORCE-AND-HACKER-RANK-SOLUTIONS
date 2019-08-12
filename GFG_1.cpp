#include"bits/stdc++.h"
using namespace std;

std::vector<int>v;
std::vector<int>::iterator it;

int evenfinder(int n)
{
	if(ceil(log2(n)) == floor(log2(n)))
	{
		return n;
	}
	else
	{
		return evenfinder(n-1);
	}
}

int main(int argc, char const *argv[])
{
	int t;
	int n,ans;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		ans = evenfinder(n);
		v.push_back(ans);
		t--;
	}

	for(it = v.begin() ; it!= v.end() ;it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}