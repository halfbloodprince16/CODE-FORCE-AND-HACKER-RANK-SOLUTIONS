#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k;
    int n;
    cin>>n;
    int x[n];
    
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int cnt=0;
    for(i=0;i<n;)
    {
        if(x[i+2]==0){cnt++;i=i+2;}
        else if(x[i+1]==0){cnt++;i++;}
        else if(x[i+1] ==1){cnt++;i=i+2;}
    }
    cout<<cnt-1;
return 0;
}
