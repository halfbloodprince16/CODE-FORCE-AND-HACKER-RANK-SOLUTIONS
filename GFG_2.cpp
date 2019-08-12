#include"bits/stdc++.h"
using namespace std;

std::stack<int>s;

int main(int argc, char const *argv[])
{
	int n,i,j,t,a;
	cin>>t;

	while(t>0)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a;
			s.push(a);
		}

		int siz = s.size();
		int mid = ceil(siz/2.0);
		cout<<siz<<" "<<mid<<endl;

		for(i=0;i<siz;i++)
		{
			if(i+1 == mid)
			{
				//cout<<"mid"<<mid<<endl;
				s.pop();
				continue;
			}
			else
			{
				cout<<s.top();
				s.pop();
			}
			
		}

		t--;
	}
	return 0;
}