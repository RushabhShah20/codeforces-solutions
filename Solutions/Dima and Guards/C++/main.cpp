// Problem: Dima and Guards
// Link to the problem: https://codeforces.com/contest/366/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < 4; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        const ll x = min(a, b), y = min(c, d);
        if (x + y <= n)
        {
            cout << i + 1 << " " << x << " " << n - x << endl;
            return;
        }
    }
    cout << -1 << endl;
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