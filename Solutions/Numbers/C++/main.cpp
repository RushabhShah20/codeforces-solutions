// Problem: Numbers
// Link to the problem: https://codeforces.com/contest/13/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a = 0;
    cin >> n;
    for (ll i = 2; i < n; i++)
    {
        ll x = n;
        while (x > 0)
        {
            a += (x % i);
            x /= i;
        }
    }
    const ll g = __gcd(a, n - 2), b = (n - 2) / g;
    a /= g;
    cout << a << "/" << b << endl;
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