#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) 
{
int julian_leap[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int julian_non_leap[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int gregorian_leap[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int gregorian_non_leap[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int special_year[12] = {31,15,31,30,31,30,31,31,30,31,30,31};
    int static ans;
    string static result;

    if(year >= 1700 and year <= 1917)
    {
        //julian year
        if(year%4 == 0)
        {
            //leap year
            int sum=0,i=0;
            while(sum < 256)
            {
                sum += julian_leap[i];
                //cout<<sum<<endl;
                i++;
            }
            sum -= julian_leap[--i];
            ans = 256-sum;
            if(i < 10)
            {
                result = to_string(ans)+".0"+to_string(i+1)+"."+to_string(year);
                return result;
            }
            else
            {
                result = to_string(ans)+"."+to_string(i+1)+"."+to_string(year);
                return result;
            }
        }

        else
        {
            //non_leap year
            int sum=0,i=0;
            while(sum < 256)
            {
                sum += julian_non_leap[i];
                //cout<<sum<<endl;
                i++;
            }
            sum -= julian_non_leap[--i];
            ans = 256-sum;
            if(i < 10)
            {
                result = to_string(ans)+".0"+to_string(i+1)+"."+to_string(year);
                return result;
            }
            else
            {
                result = to_string(ans)+"."+to_string(i+1)+"."+to_string(year);
                return result;
            }
        }
    }

    else if(year == 1918)
    {
        //special year
        int sum=0,i=0;
        while(sum < 256)
        {
            sum += special_year[i];
            //cout<<sum<<endl;
            i++;
        }
        sum -= special_year[--i];
        ans = 256-sum;
        if(i < 10)
        {
            result = to_string(ans)+".0"+to_string(i+1)+"."+to_string(year);
            return result;
        }
        else
        {
            result = to_string(ans)+"."+to_string(i+1)+"."+to_string(year);
            return result;
        }
    }
    else
    {
        //gregorian year
        if((year%4 == 0 and year%100 != 0) or year%400 == 0)
        {
            //leap year
            //special year
            int sum=0,i=0;
            while(sum < 256)
            {
                sum += gregorian_leap[i];
                //cout<<sum<<endl;
                i++;
            }
            sum -= gregorian_leap[--i];
            ans = 256-sum;
            if(i < 10)
            {
                result = to_string(ans)+".0"+to_string(i+1)+"."+to_string(year);
                return result;
            }
            else
            {
                result = to_string(ans)+"."+to_string(i+1)+"."+to_string(year);
                return result;
            }
        }
        else
        {
            //special year
            int sum=0,i=0;
            while(sum < 256)
            {
                sum += gregorian_non_leap[i];
                //cout<<sum<<endl;
                i++;
            }
            sum -= gregorian_non_leap[--i];
            ans = 256-sum;
            if(i < 10)
            {
                result = to_string(ans)+".0"+to_string(i+1)+"."+to_string(year);
                return result;
            }
            else
            {
                result = to_string(ans)+"."+to_string(i+1)+"."+to_string(year);
                return result;
            }
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

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
