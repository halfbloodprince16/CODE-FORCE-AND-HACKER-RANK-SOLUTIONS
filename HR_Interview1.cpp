#include"bits/stdc++.h"
using namespace std;

unsigned long long int countDigit(unsigned long long int n) 
{ 
    return floor(log10(n) + 1); 
} 

unsigned long long int rec_sum(unsigned long long int n)
{
	unsigned long long sum=0;
	while(n)
	{
		sum = sum + n%10;
		n = n/10;
	}

	if(sum > 9)
	{
		return rec_sum(sum);
	}
	return sum;
}

unsigned long long int create_num(unsigned long long int res,unsigned long long int k)
{
	int d = countDigit(res);
	unsigned long long int n  = res;
	k = k-1;
	while(k--)
	{
		int t = d;

		while(t--)
		{
			n = n*10;
		}

		n = n + res;
	}

	return n;
}

int main(int argc, char const *argv[])
{
	unsigned long long int n,k;
	cin>>n>>k;

	unsigned long long int res = rec_sum(n);
	//cout<<res<<endl;

	unsigned long long int out = create_num(res,k);
	//cout<<out;

	unsigned long long int ans = rec_sum(out);
	cout<<ans;
	return 0;
}