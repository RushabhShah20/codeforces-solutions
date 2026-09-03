// Problem: I love AAAB
// Link to the problem: https://codeforces.com/contest/1672/problem/B
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
        a += s[i] == 'A' ? 1 : 0;
        b += s[i] == 'B' ? 1 : 0;
        if (b > a)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (s[n - 1] == 'A')
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