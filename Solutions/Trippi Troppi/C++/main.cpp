// Problem: Trippi Troppi
// Link to the problem: https://codeforces.com/contest/2094/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

string split(string s)
{
    string res = "";
    istringstream iss(s);
    string i;
    while (iss >> i)
    {
        if (!i.empty())
        {
            res += i[0];
        }
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    ll x = t + 1;
    while (x--)
    {
        string s;
        getline(cin, s);
        string ans = split(s);
        cout << ans << endl;
    }
    return 0;
}