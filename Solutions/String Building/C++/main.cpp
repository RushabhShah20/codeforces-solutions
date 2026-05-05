// Problem: String Building
// Link to the problem: https://codeforces.com/contest/1671/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            if (b == 1)
            {
                cout << "NO" << endl;
                return;
            }
            a++;
            b = 0;
        }
        else
        {
            if (a == 1)
            {
                cout << "NO" << endl;
                return;
            }
            a = 0;
            b++;
        }
    }
    if (a == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}