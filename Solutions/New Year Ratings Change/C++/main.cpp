// Problem: New Year Ratings Change
// Link to the problem: https://codeforces.com/contest/379/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = {x, i};
    }
    sort(v.begin(), v.end());
    for (ll i = 1; i < n; i++)
    {
        if (v[i].first <= v[i - 1].first)
        {
            v[i].first = v[i - 1].first + 1;
        }
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { return a.second < b.second; });
    for (ll i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
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