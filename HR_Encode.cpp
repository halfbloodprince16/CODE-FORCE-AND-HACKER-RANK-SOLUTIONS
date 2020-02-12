#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s)
{
	int len = s.length();
	int row = floor(pow(len,0.5));
	int col = ceil(pow(len,0.5));

	if(row*col < len)
	{
		for(int i=row;i<=col;i++)
		{
			if(i*col>=len)
			{
				row = i;
				break;
			}
		}
	}
	
	/*for(int i=len;i<row*col;i++)
	{
		s += '@';
	}*/

	int a=1,b=1;
	string res;
	while(b != row*col)
	{
		if(int(s[b-1]) >= 97 and int(s[b-1])<= 122 )
		{res += s[b-1];}
		//cout<<res<<endl;
		b += col;
		if(b == len and b == row*col)
		{
			if(int(s[b-1]) >= 97 and int(s[b-1])<= 122 )
			{res += s[len-1];}
			break;
		}
		else if(b > row*col)
		{
			a++;
			b = a;
			res += " ";
		}
	}
	cout<<res;
	return res;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


