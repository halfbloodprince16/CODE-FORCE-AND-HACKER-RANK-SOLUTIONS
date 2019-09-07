#include <bits/stdc++.h>
using namespace std;

// Complete the solve function below.
string solve(long F) 
{ 
    double root5 = sqrt(5); 
    double phi = (1 + root5) / 2; 
    long nf = (long)(log(F*root5) / log(phi) + 0.5 ); 
    long Fn = (long)( pow(phi, nf)/root5 + 0.5);

    if (Fn==F) return "IsFibo"; 
    else return "IsNotFibo"; 
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
