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
	int a, b, p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    int n = s.size();

    vector<ll> v(n);
    int lasta = n - 1, lastb = n - 1;

    for(int i=n-2; i>=0; i--)
    {
        if(s[i] == 'A')
        {
            v[i] = a + v[lastb];
            lasta = i;
        } else
        {
            v[i] = b + v[lasta];
            lastb = i;
        }
    }

    for(int i=0; i<n; i++)
    {
    	if(v[i] <= p)
        {
            cout<<i + 1<<endl;
            break;
        }
    }

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