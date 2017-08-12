#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,count = 0,flag = 0;
	int size;
	cin>>size;
	char x[size];
	//int h[50];
	int i1
	for(i1 = 0 ; i1 < size ; i++)
	{
		cin>>x[i];
		x[i] = tolower(x[i]);
	//	h[x[i]]++;
	}
	for(i1 = 0 ; i1 < size ; i++)
	{
		switch(x[i1])
		{
			case 'a' :  a++;break;
			case 'b' :  b++;break;
			case 'c' :  c++;break;
			case 'd' :  d++;break;
			case 'e' :  e++;break;
			case 'f' :  f++;break;
			case 'g' :  g++;break;
			case 'h' :  h++;break;
			case 'i' :  i++;break;
			case 'j' :  j++;break;
			case 'k' :  k++;break;
			case 'l' :  l++;break;
			case 'm' :  m++;break;
			case 'n' :  n++;break;
			case 'o' :  o++;break;
			case 'p' :  p++;break;
			case 'q' :  q++;break;
			case 'r' :  r++;break;
			case 's' :  s++;break;
			case 't' :  t++;break;
			case 'u' :  u++;break;
			case 'v' :  v++;break;
			case 'w' :  w++;break;
			case 'x' :  x++;break;
			case 'y' :  y++;break;
			case 'z' :  z++;break;
		}
	}
	if(a > =1&&b > =1&&c>=1&&d>=1&&e>=1&&f > =1&&g > =1&&h>=1&&i>=1&&j>=1&&k > =1&&l > =1&&m>=1&&n>=1&&o>=1&&p > =1&&q > =1&&r>=1&&s>=1&&t>=1&&u > =1&&v > =1&&w>=1&&x>=1&&y>=1&&z>=1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	return 0;
}
