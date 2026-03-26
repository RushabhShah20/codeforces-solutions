// Problem: Display Size
// Link to the problem: https://codeforces.com/contest/747/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mn = LLONG_MAX, a = 0, b = 0;
    cin >> n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            const ll x = n / i - i;
            if (x < mn)
            {
                mn = x;
                a = i;
                b = n / i;
            }
        }
    }
    cout << a << " " << b << endl;
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