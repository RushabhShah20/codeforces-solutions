// Problem: Spyke Talks
// Link to the problem: https://codeforces.com/contest/291/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x != 0)
        {
            m[x]++;
        }
    }
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == 2)
        {
            ans++;
        }
        else if (i.second > 2)
        {
            cout << -1 << endl;
            return;
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
    solve();
    return 0;
}