// Problem: Sereja and Suffixes
// Link to the problem: https://codeforces.com/contest/368/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), suf(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<ll> s;
    s.insert(a[n - 1]);
    suf[n - 1] = s.size();
    for (ll i = n - 2; i >= 0; i--)
    {
        s.insert(a[i]);
        suf[i] = s.size();
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cout << suf[x - 1] << endl;
    }
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