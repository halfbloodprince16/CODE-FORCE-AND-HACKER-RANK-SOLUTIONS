#include<iostream>
using namespace std;
int enter();
int add(int,int);
int sub(int);
int mul(int);
int main()
{
	int n,i,j,k,a;
	cout<<"enter equivalent no. of rows and columns"<<endl;
	cin>>n;
	int x[n][n],y[n][n],z[n][n];
	
	do
{
cout<<"\n Hit 1 To Enter both the matrices";
cout<<"\n Hit 2 for addition";
cout<<"\n Hit 3 To subtraction";
cout<<"\n Hit 4 for multiplication";
cout<<"\n Hit 5 To Exit \n";
cin>>a;
switch(a)
{
    case 1: enter(); break;
    case 2: add(x[n][n],y[n][n]); break;
    case 3: sub(a); break;
    case 4: mul(a); break;
    
}

}
while(a!=5);
return 0;
}

int enter()
{
	int n,i,j,k;
	cout<<"enter equivalent no of rows and column";
	cin>>n;
	int x[n][n],y[n][n],z[n][n];
	
	cout<<"enter first matrix"<<endl;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			cin>>x[i][j];
		}
	}
	cout<<"enter second matrix"<<endl;
		for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			cin>>y[i][j];
		}
	}
}

int add(int x[n][n],int y[n][n])
{
	int i,j,z[n][n];
	cout<<"sum of the matrix is"<<"\n"<<endl;
	
	for(i = 0 ; i < n ; i++)
	{
	      for(j = 0 ; j < n ; j++)
		   {
			   z[i][j] = x[i][j] + y[i][j];
		   }
		
	}
	
	for(i = 0 ; i < n ; i++)
	{
	      for(j = 0 ; j < n ; j++)
		   {
			   cout<<z[i][j]<<" ";
		   } cout<<"\n";
		   
		
	}
}

/*int sub(int a)
{
		int i,j,x[n][n],y[n][n],z[n][n];
		cout<<"difference of the matrix is"<<"\n"<<endl;
	
	for(i = 0 ; i < n ; i++)
	{
	      for(j = 0 ; j < n ; j++)
		   {
			   z[i][j] = x[i][j] - y[i][j];
		   }
		
	}
	
	for(i = 0 ; i < n ; i++)
	{
	      for(j = 0 ; j < n ; j++)
		   {
			   cout<<z[i][j]<<" ";
		   } cout<<"\n";
		   
		
	}
		
}

int mul(int a)
{
	int i,j,x[n][n],y[n][n],z[n][n];
	cout<<"mul is :"<<"\n";	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			z[i][j] = 0;
			for(k = 0 ; k < n ; k ++)
			{
				z[i][j] = z[i][j] + (x[i][k]*y[k][j]);
			}
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
				cout<<z[i][j]<<" ";
				
		}cout<<"\n";
	}
	
}*/

	
