#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long a,b;
    long x=1e7+1,y=1e7+1;
    while(n)
    {
        cin>>a>>b;
        x = min(a,x);
        y = min(b,y);
        n--;
    }
    cout<<x*y;
}
