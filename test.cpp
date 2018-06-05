#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int x[n],hash[n]={};
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        hash[x[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(hash[i] == 0)
        {
            cout<<i<<" ";
        }
    }
}