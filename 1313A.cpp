#include"bits/stdc++.h"
using namespace std;
			

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	int ans=0;
	if(a > b) swap(a, b);
    if(c > b) swap(b, c);
	if(a) --a, ++ans;
    if(b) --b, ++ans;
    if(c) --c, ++ans;
    if(a && b) --a, --b, ++ans;
    if(b && c) --b, --c, ++ans;
    if(c && a) --c, --a, ++ans;
    if(a && b && c) --a, --b, --c, ++ans;
	cout<<ans<<endl;
	return ;
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