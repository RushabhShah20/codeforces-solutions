// Problem: Important Exam
// Link to the problem: https://codeforces.com/contest/1201/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> b(m, vector<ll>(5, 0));
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            b[j][s[i][j] - 'A']++;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll mx = 0;
        for (ll j = 0; j < 5; j++)
        {
            mx = max(mx, b[i][j]);
        }
        ans += a[i] * mx;
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