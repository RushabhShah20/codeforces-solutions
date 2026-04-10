// Problem: Fixed Points
// Link to the problem: https://codeforces.com/contest/347/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }
    ll ans = 0;
    bool x = false;
    for (const pair<ll, ll> i : m)
    {
        if (i.first == i.second)
        {
            ans++;
        }
        else
        {
            if (m[i.second] == i.first)
            {
                x = true;
            }
        }
    }
    if (x)
    {
        ans += 2;
    }
    else if (ans != n)
    {
        ans++;
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