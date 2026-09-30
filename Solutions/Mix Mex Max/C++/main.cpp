// Problem: Mix Mex Max
// Link to the problem: https://codeforces.com/contest/2127/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0)
        {
            s.insert(x);
        }
    }
    if (s.empty())
    {
        cout << "YES" << endl;
        return;
    }
    const string ans = s.size() == 1 && *s.begin() != 0 ? "YES" : "NO";
    cout << ans << endl;
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