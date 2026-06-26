// Problem: Counterexample
// Link to the problem: https://codeforces.com/contest/483/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r - 2; i++)
    {
        const ll a = i, b = i + 1, c = i + 2;
        if (__gcd(a, b) == 1 && __gcd(b, c) == 1 && __gcd(a, c) != 1)
        {
            cout << a << " " << b << " " << c << endl;
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