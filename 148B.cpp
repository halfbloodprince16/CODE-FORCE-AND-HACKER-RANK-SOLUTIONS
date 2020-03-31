#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int vp,vd,t,f,c;
	cin>>vp>>vd>>t>>f>>c;

	vector<float>pr,dr;
	pr.push_back(0);
	dr.push_back(0);

	int dis_p=0;
	int dis_d=0;
	int fl=0;
	int tres = f;
	for(int i=1; dis_p < c ;i++)
	{
		if(dis_d >= dis_p and i >= t+1)
		{
			//cout<<"hi";
			cout<<dis_p<<" "<<dis_d<<endl;
			fl=1;
		}

		if(fl == 0  and tres == f)
		{
			dis_p = pr[i-1]+vp;
			if(i >= t+1)
			{	
				dis_d = dr[i-1]+vd;
			}
		}

		if(fl == 0 and tres < f)
		{
			dis_p = pr[i-1]+vp;
			dis_d = dr[i-1];
			tres++;
		}
		
		if(fl == 1)
		{
			dis_p = pr[i-1]+vp;
			dis_d = dr[i-1]-vd;
			if(dis_d == 0)
			{
				fl=0;
				tres = 0;
			}
		}

		//cout<<dis_p<<" "<<dis_d<<endl;
		pr.push_back(dis_p);
		dr.push_back(dis_d);
	}

	int res=0;

	for(int i=0;i<pr.size();i++)
	{
		if(pr[i] <= dr[i] and i != pr.size()-1)
		{
			res++;
		}
	}
	
	cout<<res-1;
	cout<<endl;
	return 0;
}