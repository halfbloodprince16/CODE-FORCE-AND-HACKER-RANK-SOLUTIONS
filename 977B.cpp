#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
std::vector<string>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	int max=0;
	int i,j;
	ll hash[100]={};
	int flg=0,cnt=0;
	for(i=0;i<s.length()-1;i++)
	{
		string ss = s.substr(i,2);
		v.push_back(ss);
		
		if(v.size() == 0)
		{
			v.push_back(ss);
			hash[0]++;
			flg = 1;
		}
		for(itr=v.begin();itr!=v.end();itr++)
		{
			if(*itr == ss)
			{
				hash[cnt]++;
				flg = 1;
			}
			cnt++;
		}
		if(flg == 0)
		{
			v.push_back(ss);
		}
		cnt=flg=0;
	}
	max = hash[0];
	int id=0;
	for(i=1;i<100;i++)
	{
		if(hash[i] > max)
		{
			max = hash[i];
			id = i;
		}
	}
	
	cout<<v[id];
	return 0;
}