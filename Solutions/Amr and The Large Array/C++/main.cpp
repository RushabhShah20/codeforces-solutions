// Problem: Amr and The Large Array
// Link to the problem: https://codeforces.com/contest/558/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> a;
    unordered_map<ll, pair<ll, ll>> b;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
        b[x].first = min(b.count(x) == 0 ? n + 1 : b[x].first, i + 1);
        b[x].second = max(b[x].second, i + 1);
    }
    ll mx = 0;
    for (const pair<ll, ll> i : a)
    {
        mx = max(mx, i.second);
    }
    ll mn = n + 1;
    for (const pair<ll, pair<ll, ll>> i : b)
    {
        if (a[i.first] == mx)
        {
            mn = min(mn, i.second.second - i.second.first);
        }
    }
    for (const pair<ll, pair<ll, ll>> i : b)
    {
        const ll k = i.second.second - i.second.first;
        if (k == mn && a[i.first] == mx)
        {
            cout << i.second.first << " " << i.second.second << endl;
            return;
        }
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