#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k;
	int n,m;
	vector<double>v;
	cin>>n>>m;
	
	int t = n*2;
	long double arr[t];
	
	for(i = 0 ; i < t ; i++)
	{
		cin>>arr[i];
	}
	long double temp;
	for(i = 0 ; i < t ; i = i+2)
	{
		temp = arr[i]/arr[i+1];
		
		v.push_back(temp);
	}
	
	cout<< fixed << setprecision(8) <<m*(*min_element(v.begin(),v.end()));
	return 0;
}
