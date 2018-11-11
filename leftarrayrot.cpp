#include <bits/stdc++.h>
using namespace std;
std::queue<int>q;

int main()
{
    int i,n,k,x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        q.push(x);
    }
    for(i=0;i<k;i++)
    {
        x = q.front();
        q.pop();
        q.push(x);
    }
    for(i=0;i<n;i++)
    {
        cout<<q.front();
        q.pop();
    }
}
