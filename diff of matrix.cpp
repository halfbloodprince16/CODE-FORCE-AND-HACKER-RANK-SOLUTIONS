#include<iostream>>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,x[n][n],ans=0,s1=0,s2=0;
    //"enter first matrix"
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			cin>>x[i][j];
		}
	}
	//matrix difference operation
	for(i= 0 ; i < n ; i++)
	{
		s1 = s1 + x[i][i];
		s2 = s2 + x[i][n-i-1];
	}
	ans = s1 - s2;
	cout<<ans;
	return 0;
}
