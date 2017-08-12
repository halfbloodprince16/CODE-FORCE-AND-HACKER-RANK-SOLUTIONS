#include<bits/stdc++.h>//822 A
#include<string.h>
using namespace std;
int fac1(string);
int fac2(string);
int gcd(string,string);

int main()
{
	string a,b;
	string p1,p2,p3;
	cin>>a>>b;
	p1 = fac1(a);
	p2 = fac2(b);
	p3 = gcd(p1,p2);
	cout<<p3;	
}

int fac1(string m)
{
	if(m > 0)
	return (m*fac1(m-1));
	else
	return (1);
	
}
int fac2(string n)
{
	if(n > 0)
	return (n*fac2(n-1));
	else
	return (1);
}
int gcd(string m, string n)
{
	if(m == n)
	return(m);
	if(m%n == 0)
	return(n);
	if(n%m == 0)
	return(m);
	if(m > n)
	return(gcd(m%n,n));
	else 
	return(gcd(m,n%m));
}
