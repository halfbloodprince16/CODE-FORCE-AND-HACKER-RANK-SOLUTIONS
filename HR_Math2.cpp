#include <bits/stdc++.h>
using namespace std;

long halloweenParty(int k) 
{
    long a,b;
    a = k/2;
    b = k - a;
    return a*b;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int k;
        cin >> k;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = halloweenParty(k);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
