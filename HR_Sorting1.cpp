#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
    fast;
    ll n,k=0,i,j;
    string s;
    ll hash[101]={};
    cin>>n;

    int x[n];

    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
               swap(x[i],x[j]);
               k++;
            }
        }
    }
    cout<<"Array is sorted in "<<k<<" swaps."<<endl;
    cout<<"First Element: "<<x[0]<<endl;
    cout<<"Last Element: "<<x[n-1];
    return 0;
}