#include<iostream>           //fibbonacci series
using namespace std;
int fib(int n)
{
	if(n==1||n==2)
	return(1);
	return(fib(n-1)+fib(n-2));
}
int main()
{
	int i,x;
	cout<<"enter the no. till which you want the fibonacci series";
	cin>>x;
	for(i = 1 ; i <= x ; i++)
     cout<<fib(i)<<"\t";
     return 0;
}
