#include <bits/stdc++.h>
using namespace std;
std::vector<int>v;
std::vector<int>::iterator itr;
std::map<int,int>mp;


int getsum(int x)
{
    int ans=0;
    if(x < 10)
    {
        return x;
    }
    else
    {
        while(x)
        {
            ans += x%10;
            x = x/10;
        }
        return ans;
    }
}

int main()
{
    int n,i=1;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(i<=n)
    {
        if(n%i == 0)
        {
            v.push_back(i);
        }
        i++;
    }

    sort(v.begin(), v.end());

    int mx = 0;
    for(itr = v.begin() ; itr != v.end() ; itr++)
    {
        mx = max(mx,getsum(*itr));
        mp.insert(pair<int,int>(mx,*itr));
    }
    cout<<mp[mx];
    return 0;
}
