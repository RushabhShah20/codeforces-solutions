// Problem: Launch of Collider
// Link to the problem: https://codeforces.com/contest/1003/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = LLONG_MAX;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == 'L' && s[i - 1] == 'R')
        {
            x = min(x, (a[i] - a[i - 1]) / 2);
        }
    }
    const ll ans = x == LLONG_MAX ? -1 : x;
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