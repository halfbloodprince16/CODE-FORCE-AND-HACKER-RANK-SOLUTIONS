#include<bits/stdc++.h>
using namespace std;


 
int main()
{
   int t1 = 1, t2 = 1, nextTerm = 0, n;

	vector<int>v;
	vector<int>::iterator j,k;
	
    cin >> n;
	int c = n;
    v.push_back(t1);
    v.push_back(t2);

    nextTerm = t1 + t2;

    while(n > 2)
    {
        v.push_back(nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        n--;
    }
    
    /*for(j = v.begin() ; j < v.end() ; j++)
    {
    	cout<<*j;
	}*/
	
	v.erase(unique(v.begin(),v.end()),v.end());
	/*for(j = v.begin() ; j < v.end() ; j++)
    {
    	cout<<*j;
	}*/
	int i;
	char x[c];
	
	for(i = 0; i < c; i++)
	{
		if(*v.begin() == i+1)
		{
		//	cout<<*v.begin();
			x[i] = 'O';
			v.erase(v.begin());
		}
		else
		{
			x[i] = 'o';
		}
	}
	
	for(i = 0 ; i < c ; i++)
	{
		cout<<x[i];
	}

    return 0;
}












