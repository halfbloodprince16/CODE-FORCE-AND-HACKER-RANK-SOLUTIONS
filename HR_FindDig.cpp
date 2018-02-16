#include <bits/stdc++.h>
using namespace  std;

int main()
{
	int n;
	cin>>n;
	int t = n;
	vector<int>v;
	int ans=0;
	while(n)
	{
		string s;
		cin>>s;
		int len = s.length(); //str lenght
		int x;//our no whom to div;
		stringstream str(s);
		str >> x;
		
		int i=0;
		while(len)
		{
			if(s[i] != '0')
			{
				int y = (int)s[i]-48;
				
			
				if(x%y == 0)
				{
					ans++;
				}
			}
			i++;
			len--;
		}
		v.push_back(ans);
		ans=0;
		n--;
	}
	int i=0;
	for(i=0;i<t;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}