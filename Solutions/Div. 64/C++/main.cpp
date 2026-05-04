// Problem: Div. 64
// Link to the problem: https://codeforces.com/contest/887/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll x = 0, y = 0;
    const ll n = s.size(), j = s.find_first_of('1');
    if (j == string::npos)
    {
        cout << "no" << endl;
        return;
    }
    for (ll i = j; i < n; i++)
    {
        if (s[i] == '0')
        {
            x++;
        }
    }
    if (x >= 6)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
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