#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
    string str ;
    int i ,cnt =1 , flag =0 ,l=0;
    //ch = str[0] ;
    cin>>str ;

    for(i=1 ; i<str.size() ; i++)
    {
        if(str[i]==str[i-1])
        {
            cnt++ ;
            if(cnt==7)
            {
                cout<<"YES";
                l =1 ;
                break ;
            }
        }
        else
            cnt =1 ;
    }
    if(cnt<7)
        cout<<"NO";
    return 0;
}

