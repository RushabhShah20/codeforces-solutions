// Problem: Comparing Two Long Integers
// Link to the problem: https://codeforces.com/contest/616/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll j = a.find_first_not_of('0'), k = b.find_first_not_of('0');
    const string x = j == string::npos ? "0" : a.substr(j), y = k == string::npos ? "0" : b.substr(k);
    const ll n = x.size(), m = y.size();
    if (n > m)
    {
        cout << ">" << endl;
    }
    else if (n < m)
    {
        cout << "<" << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (x[i] > y[i])
            {
                cout << ">" << endl;
                return;
            }
            if (x[i] < y[i])
            {
                cout << "<" << endl;
                return;
            }
        }
        cout << "=" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}