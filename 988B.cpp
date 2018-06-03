#include"bits/stdc++.h"
using namespace std;

std::vector<string>v;
std::vector<string>::iterator itr,it;
typedef long long ll;

struct compare 
{
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};
compare c;
std::queue<string>q;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	string s,str,fs;
	for(int i = 0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),c);
	int flg=0;
	for(itr=v.begin();itr!=v.end()-1;itr++)
	{
		//cout<<*itr<<endl;
		str = *itr;
		for(it = itr+1;it!=v.end();it++)
		{
			fs = *it;
			if(fs.find(str) != std::string::npos)
			{
				flg=0;
				continue;
			}
			else
			{
				flg=1;
				return cout<<"NO",0;
			}
		}
		if(flg==0)
		{
			q.push(str);
		}
	}
	itr = v.end()-1;
	str = *itr;
	q.push(str);
	cout<<"YES"<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}