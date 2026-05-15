// Problem: MEX Partition
// Link to the problem: https://codeforces.com/contest/2160/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll ans = 0;
    for (const ll i : s)
    {
        if (ans == i)
        {
            ans++;
        }
        else
        {
            break;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}