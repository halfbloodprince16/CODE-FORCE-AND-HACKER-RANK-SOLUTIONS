#include<bits/stdc++.h>
using namespace std;

std::priority_queue<int>q;

int main(int argc, char const *argv[])
{
	int t;
	int n;
	cin>>t;

	while(t>0)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			q.push(a);
		}

		//print elements
		while(q.empty() == true)
		{
			cout<<q.top();
			q.pop();
		}
		
		t--;
	}
	return 0;
}
