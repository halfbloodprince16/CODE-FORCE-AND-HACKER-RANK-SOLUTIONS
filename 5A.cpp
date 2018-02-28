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
int main()
{
    std::string line;
    int users(0), total(0);
    while(getline(std::cin, line)){
        if(line[0] == '+'){++users;}
        else if(line[0] == '-'){--users;}
        else{total += users * (line.size() - line.find(':') - 1);}
    }
    std::cout <<  total << std::endl;
    return 0;
}