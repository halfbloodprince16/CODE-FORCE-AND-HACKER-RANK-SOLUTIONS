#include <bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n)
{
   int temp = arr[0], i;
   for (i = 0; i < n-1; i++)
       arr[i] = arr[i+1];
    
   arr[i] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    leftRotatebyOne(arr, n);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
}

int main()
{
   int n,cnt=0,i;
   cin>>n;
   int x[n];
   for(i=0;i<n;i++)
   {
       cin>>x[i];
   }
   bool  enter = false;
   while(enter == false)
   {
        if(x[0] == 0)
        {
            cnt++;
            enter = true;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(x[i]!=0)
                {
                    x[i] -= 1;
                }
            }
            cnt++;
            leftRotate(x, 1, n);
        }
   }
   if(cnt%n==0){return cout<<n,0;}
   
   cout<<cnt%n;
 
   return 0;
}
