// Problem: Blocked
// Link to the problem: https://codeforces.com/contest/2220/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() == n)
    {
        sort(a.begin(), a.end(), greater<>());
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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