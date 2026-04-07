// Problem: Fadi and LCM
// Link to the problem: https://codeforces.com/contest/1285/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            const ll x = i, y = n / i;
            if (__gcd(x, y) == 1)
            {
                mx = min(mx, max(x, y));
            }
        }
    }
    cout << n / mx << " " << mx << endl;
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