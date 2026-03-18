// Problem: Fraction
// Link to the problem: https://codeforces.com/contest/854/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        ll x = n / 2;
        while (__gcd(x, n - x) != 1)
        {
            x--;
        }
        cout << x << " " << n - x << endl;
    }
    else
    {
        cout << (n / 2) << " " << ((n + 1) / 2) << endl;
    }
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