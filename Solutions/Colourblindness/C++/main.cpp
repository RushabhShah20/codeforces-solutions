// Problem: Colourblindness
// Link to the problem: https://codeforces.com/contest/1722/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            s[i] = 'B';
        }
        if (t[i] == 'G')
        {
            t[i] = 'B';
        }
    }
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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