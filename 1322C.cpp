#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void solve()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int tim = n/k;
	string res="";

	int till=0;
	if(k%2 == 0){till = k/2;}
	else{till = k/2+1;}

	for(int i=0;i<till;i++)
	{
		res += s[i];
	}
	
	for(int i=res.length()-2;i>=0;i--)
	{
		res += res[i];
	}

	for(int i=0;i<tim;i++)
	{
		res += res;
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(s[i] != res[i])
		{
			cnt++;
		}
	}

	cout<<cnt<<endl;
}


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}

	return 0;
}