// Problem: Skibidus and Ohio
// Link to the problem: https://codeforces.com/contest/2065/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            x = true;
            break;
        }
    }
    if (x)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
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