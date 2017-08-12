#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,count= 0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0;
	string s;
	cin>>s;
	
	for(i = 0 ; i < s.size() ; i++)
	{
		switch(s[i])
		{
			case 'B' : cnt1++;break;
			case 'u' : cnt2++;break;
			case 'l' : cnt3++;break;
			case 'b' : cnt4++;break;
			case 'a' : cnt5++;break;
			case 's' : cnt6++;break;
			case 'r' : cnt7++;break;
		}
	}
//	cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<" "<<cnt5<<" "<<cnt6<<" "<<cnt7<<"\n";
	
		if(2*cnt1 >= cnt2 && cnt2/2 >= cnt3 && 2*cnt3 >= cnt4 && (cnt4 >= cnt5||cnt4 <= cnt5) && cnt5/2 >= cnt6 && (cnt6 <= cnt7||cnt6>=cnt7))
		{
		//	cout<<"hi";
			//count++;
			cout<<cnt1;
		}
	
	
}
