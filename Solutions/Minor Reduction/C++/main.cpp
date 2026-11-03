// Problem: Minor Reduction
// Link to the problem: https://codeforces.com/contest/1626/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        const ll x = s[i] - '0' + (s[i + 1] - '0');
        if (x >= 10)
        {
            s[i] = x / 10 + '0';
            s[i + 1] = x % 10 + '0';
            cout << s << endl;
            return;
        }
    }
    const ll x = s[0] - '0' + (s[1] - '0');
    cout << x << s.substr(2) << endl;
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