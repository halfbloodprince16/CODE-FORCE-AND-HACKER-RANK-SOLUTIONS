//Vighnesh Tiwari Codes //CR7VIGGY GITHUB PROFILE................AIT PUNE,INDIA
#include<iostream>                                      //factorial code.......
using namespace std;

long fac(int x)
{
	if(x>0)
	return(x*fac(x-1));
	else
	return(1);
}

int main()
{
	long int a;
	cout<<"enter the no. whoch you would like to calculate the factorial  ";
	cin>>a;
	cout<<"Ans = "<<fac(a);
}
