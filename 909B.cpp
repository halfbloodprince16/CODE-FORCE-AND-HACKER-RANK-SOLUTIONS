#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,b,c;
    cin>>n;
    c = n/2;
    a = ceil(c);
    b = floor(n/2);
    float ans = (b+1)*a;
    cout<<ans;
}
