// Problem: Fingerprints
// Link to the problem: https://codeforces.com/contest/994/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    vector<pair<bool, bool>> c(10, {false, false});
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]].first = true;
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        c[b[i]].second = true;
    }
    for (ll i = 0; i < n; i++)
    {
        if (c[a[i]].first == true && c[a[i]].second == true)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
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