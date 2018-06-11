#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	string s;
	cin>>s;
	if (s.find("ABC") != std::string::npos) 
	{
    	cout <<"YES";
    	return 0;
	}
	else if(s.find("BAC") != std::string::npos)
	{
		cout<<"YES";
		return 0;
	}
	else if(s.find("CBA") != std::string::npos)
	{
		cout<<"YES";
		return 0;
	}
	else if(s.find("BCA") != std::string::npos)
	{
		cout<<"YES";
		return 0;
	}
	else if(s.find("CAB") != std::string::npos)
	{
		cout<<"YES";
		return 0;
	}
	else if(s.find("ACB") != std::string::npos)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}