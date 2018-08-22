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
	ll n,k,i,j;
	string s1,s2,s;
	ll hash[101]={};
	cin>>n;
	int f=0;
	int leng=0;
	while(n>0)
	{
		cin>>s1>>s2;
		
		for (i = 0; i < s1.length(); i++) 
       	{
       		for (int len = 1; len <= s1.length() - i; len++)
          	{
          		 s = s1.substr(i, len);
          		 f = s2.find(s);
          		 if(f == std::string::npos)
          		 {
          		 	continue;
          		 }
          		 else
          		 {
          		 	if(leng <= s.length())
          		 	{
          		 		leng = s.length();
          		 	}

          		 }
          	}
        }
        cout<<((s1.length()+s2.length())-(leng*2))<<endl;
        leng = 0;
		n--;
	}
	
	return 0;
}