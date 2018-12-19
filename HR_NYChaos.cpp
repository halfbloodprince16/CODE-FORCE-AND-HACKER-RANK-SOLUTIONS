#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll t,n,k,i,j,cnt=0,flg=0;;
	string s;
	ll hash[101]={};
	
	cin>>t;

	while(t>0)
	{
		cin>>n;
		int x[n];
		for(i=0;i<n;i++)
		{
			cin>>x[i];
		}

		for(i=n-1;i>=0;i--)
		{
			if(x[i] -(i+1) > 2)
			{
				v.push_back("Too chaotic");
				flg=1;
				break;
			}

			for(j=max(0,x[i]-2);j<i;j++)
			{
				if(x[j] > x[i])
				{
					cnt++;
				}
			}
		}

		if(flg==0)
			v.push_back(to_string(cnt));
		cnt=0;
		flg=0;
		t--;
	}


	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}