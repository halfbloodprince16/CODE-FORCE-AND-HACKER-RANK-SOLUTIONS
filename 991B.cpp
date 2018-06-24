#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
ll n,k,i,j;
string s;
ll hash[101]={};
int cnt=0;
int x[101];
float s1=0,s2=0;

/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

bool chk()
{
	for(i=0;i<n;i++)
	{
		s1+=x[i];
	}
	if(s1/n >= 4.5){return true;}
	return false;
}

int main(int argc, char const *argv[])
{
	fast;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		s2+=x[i];
	}
	sort(x,x+n);
	if(s2/n >= 4.5){return cout<<"0",0;}
	while(chk()==false)
	{
		for(j=0;j<n;j++)
		{
			if(x[j]<5)
			{
				x[j] = 5;
				cnt++;
				break;
			}
		}
		s1=0;
	}
	cout<<cnt;
	return 0;
}