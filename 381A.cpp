#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,j,k,a,temp = 0;
	int play1=0,play2=0;
	
    cin>>a;
    int x[a];
    for(i=0;i<a;i++)
    cin>>x[i];
    
    //sort
    for(i = 0 ; i < a ; i++)
    {
    	for(j = i+1 ; j < a ; j++)
    	{
    		if(x[i] < x[j])
    		{
    			temp = x[i];
    			x[i] = x[j];
    			x[j] = temp;
			}
		}
	}
	
    for(i = 0 ; i <a ; i++)
    {
    	if(i%2 == 0)
    	{
    		play1 += x[i];
		}
		else
		{
			play2 += x[i];
		}
	}
	cout<<play1<<" "<<play2;
    return 0;

}
