// Problem: Choosing Teams
// Link to the problem: https://codeforces.com/contest/432/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, y = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= 5 - k)
        {
            y++;
        }
    }
    const ll ans = y / 3;
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