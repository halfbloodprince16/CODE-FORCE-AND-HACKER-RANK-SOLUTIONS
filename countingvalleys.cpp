#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{
    int cnt=0,flg=0,i,j;
    for(i=0;i<n;i++)
    {
        if(s[i] == 'U')
        {
            flg++;
            if(flg > j && flg==0){cnt++;}
            j = flg;
        }
        else if(s[i] == 'D')
        {
            flg--;
            if(flg > j && flg==0){cnt++;}
            j = flg;
        }
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
