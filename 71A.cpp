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
int main()
{
	int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
    	if(s[i]=='A'&&s[i+1]=='A')
    	{
    		continue;
    	}
    	else
    	{
    		cout<<s[i];
    	}
    }

    return 0;
}