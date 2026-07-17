// Problem: Fox Dividing Cheese
// Link to the problem: https://codeforces.com/contest/371/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> x(3, 0), y(3, 0);
    while (a % 2 == 0)
    {
        x[0]++;
        a /= 2;
    }
    while (a % 3 == 0)
    {
        x[1]++;
        a /= 3;
    }
    while (a % 5 == 0)
    {
        x[2]++;
        a /= 5;
    }
    while (b % 2 == 0)
    {
        y[0]++;
        b /= 2;
    }
    while (b % 3 == 0)
    {
        y[1]++;
        b /= 3;
    }
    while (b % 5 == 0)
    {
        y[2]++;
        b /= 5;
    }
    if (a != b)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = abs(x[0] - y[0]) + abs(x[1] - y[1]) + abs(x[2] - y[2]);
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