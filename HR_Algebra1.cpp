#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(long x) 
{
    // n^2 + n - 2*x
    // roots = (-b +/- pow(b^2 - 4ac,0.5))/2a , if any of the root is +ve then its answer.

    unsigned long long int D = sqrt(1 + 8*x);
    //just check for perfect squares.... 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
