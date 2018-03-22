#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void subString(string s, int n) 
{
    for (int i = 0; i < n; i++) 
        for (int len = 2; len <= n - i; len++)
            v.push_back(s.substr(i, len));
}
int main(int argc, char const *argv[])
{
	fast;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i,j,k;
	subString(s,s.length());
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}