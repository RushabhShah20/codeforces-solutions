// Problem: Level Statistics
// Link to the problem: https://codeforces.com/contest/1334/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    ll mxa = -1, mxb = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i].first - mxa < a[i].second - mxb || a[i].first < mxa || a[i].second < mxb)
        {
            cout << "NO" << endl;
            return;
        }
        mxa = max(mxa, a[i].first);
        mxb = max(mxb, a[i].second);
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