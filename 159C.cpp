#include"bits/stdc++.h" 
#include <iomanip>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

double maxvolume(int s) 
{ 
    // finding length 
    double length = s / 3; 
  
    s -= length; 
  
    // finding breadth 
    double breadth = s / 2; 
  
    // finding height 
    double height = s - breadth; 
  
    cout<<setprecision(12)<<fixed<<length * breadth * height; 

    return 0;
} 

int main(int argc, char const *argv[])
{
    double n;
    cin>>n;
    maxvolume(n);
    return 0;
}