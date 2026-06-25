// Problem: Dima and Friends
// Link to the problem: https://codeforces.com/contest/272/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        y += x;
    }
    ll ans = 0;
    for (ll i = 1; i <= 5; i++)
    {
        if ((y + i) % (n + 1) != 1)
        {
            ans++;
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