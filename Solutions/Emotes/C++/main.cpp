// Problem: Emotes
// Link to the problem: https://codeforces.com/contest/1117/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (x < z)
        {
            y = x;
            x = z;
        }
        else if (y < z)
        {
            y = z;
        }
    }
    const ll a = m / (k + 1), b = m % (k + 1), ans = a * (k * x + y) + b * x;
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