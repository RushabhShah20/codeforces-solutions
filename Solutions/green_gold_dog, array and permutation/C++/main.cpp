// Problem: green_gold_dog, array and permutation
// Link to the problem: https://codeforces.com/contest/1867/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> m(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[i] = {x, i};
    }
    sort(m.rbegin(), m.rend());
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[m[i].second] = i + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}