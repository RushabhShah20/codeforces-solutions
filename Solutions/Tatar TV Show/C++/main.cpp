// Problem: Tatar TV Show
// Link to the problem: https://codeforces.com/contest/2236/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (ll i = 0; i + k < n; i++)
    {
        if (s[i] == '1')
        {
            s[i] = (1 - (s[i] - '0')) + '0';
            s[i + k] = (1 - (s[i + k] - '0')) + '0';
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << "NO" << endl;
            return;
        }
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