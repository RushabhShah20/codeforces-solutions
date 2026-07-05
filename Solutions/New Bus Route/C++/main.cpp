// Problem: New Bus Route
// Link to the problem: https://codeforces.com/contest/792/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    map<ll, ll> m;
    for (ll i = 1; i < n; i++)
    {
        m[a[i] - a[i - 1]]++;
    }
    cout << m.begin()->first << " " << m.begin()->second << endl;
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