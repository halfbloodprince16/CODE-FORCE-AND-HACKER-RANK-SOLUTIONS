#include<bits/stdc++.h>
using namespace std;
main()
{
	int y,z,i,j,k,count = 0,flag = 0;
	
	long long int x;
    cin>>x;
    if(x==0)
    {
        cout<<"1";  goto LOOP;
    }
    if(x%4==1)
        cout<<"8";
    if(x%4==2)
        cout<<"4";
    if(x%4==3)
        cout<<"2";
    if(x%4==0)
        cout<<"6";
   LOOP: return 0;

}
