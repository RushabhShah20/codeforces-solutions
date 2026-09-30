// Problem: Omkar and Last Class of Math
// Link to the problem: https://codeforces.com/contest/1372/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll z = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            z = i;
            break;
        }
    }
    const ll x = z == 1 ? 1 : n / z, y = z == 1 ? n - 1 : n - x;
    cout << x << " " << y << endl;
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