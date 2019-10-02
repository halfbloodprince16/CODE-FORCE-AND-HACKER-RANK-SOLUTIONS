#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int t,n;
		cin>>n;
		t = n;
		
		std::map<string,int> m = {};
		std::map<string,int> :: iterator itr;

		while(n--)
		{
			string s;
			cin>>s;
			m[s]++;
		}
		int cnt=0;
		
		for(itr=m.begin();itr!=m.end();itr++)
		{
			if(itr->second == 2)
			{
				cnt++;
			}
		}

		cout<<cnt<<endl;

	}
	return 0;
}