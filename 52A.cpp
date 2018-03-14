#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
    ll hash[4]={};
    ll n;
    cin>>n;
    ll x[n];
    ll i;
    for(i=0;i<n;i++){
        cin>>x[i];
        hash[x[i]]++;
    }
    sort(hash,hash+4);
    cout<<(hash[1]+hash[2]);
    return 0;
}