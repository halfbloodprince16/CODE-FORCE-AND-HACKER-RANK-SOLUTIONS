#include"bits/stdc++.h"
using namespace std;

std::queue<int>q;

int main()
{
    int n,a,b;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b;
            q.push(b);
        }
        if(a==2)
        {
            q.pop();
        }
        if(a==3)
        {
            cout<<q.front()<<endl;
        }
        n--;
    }
    return 0;
}

