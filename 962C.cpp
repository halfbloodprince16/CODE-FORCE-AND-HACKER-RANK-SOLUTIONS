#include"bits/stdc++.h"
#include <sstream>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
int cnt=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void chksq(int n)
{
	int x = sqrt(n);
	if(x*x == n)
	{
		cout<<"Yes";
	}
}
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	string s;
	int n = str.length();
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s = (s+ str[i]);
			s = s+str[j];
			cout<<s<<endl;
			s="";
		}
		
	}
	cout<<cnt;
	return 0;
}
/*s.erase(s.begin()+j);
			stringstream g(s);
			int x = 0;
		    g >> x;
		    cout<<x<<endl;*/