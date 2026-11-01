// Problem: Fraction and Six
// Link to the problem: https://codeforces.com/contest/2278/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<ll> a(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < m; i++)
    {
        a[t[i] - 'a']--;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (((i == 18 || i == 8 || i == 23) && (a[i] != 1)) || (!(i == 18 || i == 8 || i == 23) && (a[i] != 0)))
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