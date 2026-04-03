// Problem: Juggling Letters
// Link to the problem: https://codeforces.com/contest/1397/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        const ll m = s.size();
        for (ll j = 0; j < m; j++)
        {
            a[s[j] - 'a']++;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] % n != 0)
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