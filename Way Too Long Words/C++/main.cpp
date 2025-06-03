// Problem: Way Too Long Words
// Link to the problem: https://codeforces.com/contest/71/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            cout << s.front() + to_string((s.size() - 2)) + s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}