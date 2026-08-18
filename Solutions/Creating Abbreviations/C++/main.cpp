// Problem: Creating Abbreviations
// Link to the problem: https://codeforces.com/contest/2257/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> a(26, false);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a[s[0] - 'a'] = true;
    }
    bool x = true;
    for (ll i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        const ll k = s.size();
        for (ll j = 0; j < k; j++)
        {
            if (!a[s[j] - 'A'])
            {
                x = false;
            }
        }
    }
    const string ans = x ? "YES" : "NO";
    cout << ans << endl;
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