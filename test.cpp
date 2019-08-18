#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);

// Complete the closestStraightCity function below.
vector<string> closestStraightCity(vector<string> c, vector<int> x, vector<int> y, vector<string> q) 
{
    for(int i=0;i<q.size();i++)
    {
        for(int j=0; j<c.size();j++)
        {
            if(q[i] == c[j])
            {
                cout<<x[i]<<y[j]<<endl;
            }
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string c_count_temp;
    getline(cin, c_count_temp);

    int c_count = stoi(ltrim(rtrim(c_count_temp)));

    vector<string> c(c_count);

    for (int i = 0; i < c_count; i++) {
        string c_item;
        getline(cin, c_item);

        c[i] = c_item;
    }

    string x_count_temp;
    getline(cin, x_count_temp);

    int x_count = stoi(ltrim(rtrim(x_count_temp)));

    vector<int> x(x_count);

    for (int i = 0; i < x_count; i++) {
        string x_item_temp;
        getline(cin, x_item_temp);

        int x_item = stoi(ltrim(rtrim(x_item_temp)));

        x[i] = x_item;
    }

    string y_count_temp;
    getline(cin, y_count_temp);

    int y_count = stoi(ltrim(rtrim(y_count_temp)));

    vector<int> y(y_count);

    for (int i = 0; i < y_count; i++) {
        string y_item_temp;
        getline(cin, y_item_temp);

        int y_item = stoi(ltrim(rtrim(y_item_temp)));

        y[i] = y_item;
    }

    string q_count_temp;
    getline(cin, q_count_temp);

    int q_count = stoi(ltrim(rtrim(q_count_temp)));

    vector<string> q(q_count);

    for (int i = 0; i < q_count; i++) {
        string q_item;
        getline(cin, q_item);

        q[i] = q_item;
    }

    vector<string> res = closestStraightCity(c, x, y, q);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
