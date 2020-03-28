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
int main(int argc, char const *argv[])
{
	ll a,b;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
	ll t = a%b;
	if(a%b == 0){cout<<"0"<<endl;}
	else {cout<<(b-t)<<endl;}
	}
	
	return 0;
}