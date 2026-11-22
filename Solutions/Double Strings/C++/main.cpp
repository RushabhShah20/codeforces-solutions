// Problem: Double Strings
// Link to the problem: https://codeforces.com/contest/1703/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    unordered_set<string> t;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        t.insert(s[i]);
    }
    string ans(n, '0');
    for (ll i = 0; i < n; i++)
    {
        bool x = false;
        const ll k = s[i].size();
        for (ll j = 1; j < k; j++)
        {
            const string a = s[i].substr(0, j), b = s[i].substr(j);
            if (t.count(a) > 0 && t.count(b) > 0)
            {
                x = true;
                break;
            }
        }
        if (x)
        {
            ans[i] = '1';
        }
    }
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