
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    int m = min(a, b);
    int del = 1;
    for (int i = 2; i <= m; ++i) {
        del *= i;
    }
    cout << del;
}
