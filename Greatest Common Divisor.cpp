////Vighnesh Tiwari Codes //CR7VIGGY GITHUB PROFILE................AIT PUNE,INDIA
#include<iostream>                          //greatest common divisor
using namespace std;
int gcd(int a , int b)
{
	if(a == b)
	return(a);
	if(a%b == 0)
	return(b);
	if(b%a == 0)
	return(a);
	if(a > b)
	return(gcd(a%b,b));
	else 
	return(gcd(a,b%a));
}

int main()
{
	int x, y;
	cout<<"enter two nos. to calculate the greatest common divisor between them";
	cin>>x>>y;
	cout<<"\n"<<gcd(x,y);
	return 0;
}
