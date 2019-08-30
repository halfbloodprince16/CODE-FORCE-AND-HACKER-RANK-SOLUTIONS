#include"bits/stdc++.h"
using namespace std;

std::multimap<string,string>mp;
std::multimap<string,string>::iterator itr;

std::vector<int>v;

std::queue<string>q;


int main(int argc, char const *argv[])
{
	int n;
	string s,child;
	while(s!="STOP")
	{
		cin>>s>>n;
		if(s == "STOP")
		{
			break;
		}
		while(n>0)
		{
			cin>>child;
			mp.insert(pair<string,string>(s,child));
			n--;
		}
	}
	while(s != "STOP");
	string a,b;
	bool cond = false;
	int lvl = 0,found=0;
	while(n>0)
	{
		cin>>a>>b;
		while(cond == false)
		{
			for(itr=mp.begin();itr!=mp.end();itr++)
			{
				if(itr->first == a)
				{
					q.push(itr->second);
					found = 1;
				}
			}
			while(!q.empty())
			{
				if(q.front() == b)
				{
					cout<<a<<" "<<b<<"F"<<endl;
					cond = true;
					break;
				}
				else
				{
					for(itr=mp.begin();itr!=mp.end();itr++)
					{
						if(itr->first == q.front())
						{
							q.push(itr->second);
						}
					}

					q.pop();
				}
			}
			if(found == 0 or cond == false)
			{
				cout<<"NF"<<endl;
				cond = true;
			}
			found = 0;
		}
		lvl = 0;
		cond = false;
		while(!q.empty())
		{
			q.pop();
		}
		n--;
	}


	return 0;
}
