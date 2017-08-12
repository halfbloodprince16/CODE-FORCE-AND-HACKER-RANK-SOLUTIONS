#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,count = 0;
	cin>>a>>b>>c;
	
    if(b+c>=a)  
	cout<<a-b;  
	
    else if(b+c<a)  
    cout<<c+1;
    
	return 0;
}
