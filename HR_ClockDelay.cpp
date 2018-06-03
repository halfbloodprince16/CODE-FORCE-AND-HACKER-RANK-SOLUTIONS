#include"bits/stdc++.h"
using namespace std;

std::queue<int>q;

void clk(int h1,int m1,int h2,int m2,int k)
{
	int h,m;
	h = h2-h1;
	m = m2-m1;
	if(m<0)
	{
		h-=1;
		m +=60;
	}	
	//cout<<h<<m<<endl;
	h *= 60;
	h+=m;
	h = k-h;
	if(h<0){h=-h;}
	q.push(h); 
}
int main(int argc, char const *argv[])
{
	int n,h1,m1,h2,m2,k;
	cin>>n;
	while(n)
	{
		cin>>h1>>m1>>h2>>m2>>k;
		clk(h1,m1,h2,m2,60*k);
		n--;
	}
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}