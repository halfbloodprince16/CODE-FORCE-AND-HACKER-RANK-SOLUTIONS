#include"bits/stdc++.h"
using namespace std;

std :: vector<string>v;
std :: vector<string>::iterator itr;

int main()
{
    int h1[26]={},h2[26]={};
    string s,ss;
    int t,i,m;
    cin>>t;
    
    while(t>0)
    {
        cin>>s>>ss;
        for(i=0;i<s.length();i++)
        {
            m = int(s[i]);
            m -= 97;
            h1[m]++;
        }
        for(i=0;i<ss.length();i++)
        {
            m = int(ss[i]);
            m -= 97;
            h2[m]++;
        }
        for(i=0;i<26;i++)
        {
            if(h1[i] == h2[i])
            {
                continue;
            }
            else
            {
                v.push_back("NO");
                goto LOOP ;
            }
        }
        v.push_back("YES");
       LOOP : t--;
    }
    for(itr = v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<endl;
    }
   
    return 0;
}