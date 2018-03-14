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
	string s1,s2;
    int i;
    cin>>s1>>s2;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='1'&&s2[i]=='1')
        {
            cout<<"0";
        }
        else if(s1[i]=='1'&&s2[i]=='0')
        {
            cout<<"1";
        }
        else if(s1[i]=='0'&&s2[i]=='1')
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    return 0;
}