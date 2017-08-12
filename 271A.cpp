#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,count = 0 ,flag = 0;
	int a,b,c;
	cin>>a;
	 if(a%2 ==0)//even
	 {
	 	cout<<a/2;
	 }
	 else//odd
	 {
	 	cout<<(a/-2)-1;
	 }
	
	return 0;
}
