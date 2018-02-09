#include"bits/stdc++.h"
using namespace std;
 int main()
 {
 	int a;
 	cin>>a;
 	int x[a];
 	int i;
 	for(i = 0 ;i  < a ; i++)
 	{
 		cin>>x[i];
 	}

 	int high=x[0],low=x[0];
 	int cnt1=0,cnt2=0;
 	for(i = 1 ; i < a ; i++)
 	{
 		if(x[i] > high)
 		{
 			high = x[i];
 			cnt1++;
 		
 	 	}
 	 	if(x[i] < low)
 	 	{
 	 		low = x[i];
 	 		cnt2++;
 	 	}
 	 }
 	cout<<cnt1<<" "<<cnt2;
 }