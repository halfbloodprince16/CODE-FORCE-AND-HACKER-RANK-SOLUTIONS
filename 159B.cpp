#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int solve(string s,int l)
{
	for(int i=0;i<l;i++)
	{
		//cout<<s[i];
		if(s[i] != s[l-i-1])
		{
			return 0;
		}
	}
	return 1;

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	int l = s.length();
	int first = solve(s,l);
	//cout<<endl;
	if(first == 1)
	{
		int end = (l-1)/2;
		string sc = "";
		for(int i=0;i<end;i++)
		{
			sc += s[i];
		}

		int sec = solve(sc,sc.length());
		//cout<<endl;
		if(sec == 1)
		{
			int st = (l+3)/2;
			string thr = "";
			for(int i=st-1;i<l;i++)
			{
				thr += s[i];
			}
			int third = solve(thr,thr.length());
			//cout<<endl;

			if(third == 1)
			{
				cout<<"Yes";
			}
			else
			{
				cout<<"No";
			}
		}
		else
		{
			cout<<"No";
		}
	}
	else
	{
		cout<<"No";
	}
	return 0;
}