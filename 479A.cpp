#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	long long int u,v,w,x,y,z,temp = 0;
	long long int a,b,c;
	int arr[6];
	cin>>a>>b>>c;
	u = a+b+c;
	arr[0] = u;
	v = a+(b*c);
	arr[1] = v;
	w = a*b*c;
	arr[2] = w;
	x = (a*b)+c;
	arr[3] = x;
	y = (a+b)*c;
	arr[4] = y;
	z = a*(b+c);
	arr[5] = z;
	
	for(i = 0 ; i  < 6 ; i++)
	{
		for(j = i+1 ; j  < 6 ; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
	cout<<arr[0];
	
	
}
