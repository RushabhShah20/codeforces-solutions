// Problem: Good Number
// Link to the problem: https://codeforces.com/contest/365/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<bool> a(10, false);
        const ll m = s.size();
        for (ll j = 0; j < m; j++)
        {
            a[s[j] - '0'] = true;
        }
        bool x = true;
        for (ll j = 0; j <= k; j++)
        {
            if (!a[j])
            {
                x = false;
                break;
            }
        }
        ans += x;
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
    solve();
    return 0;
}