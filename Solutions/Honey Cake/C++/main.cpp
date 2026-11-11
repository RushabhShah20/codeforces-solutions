// Problem: Honey Cake
// Link to the problem: https://codeforces.com/contest/2181/problem/H
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    const ll x = __gcd(n, a);
    n /= x;
    const ll y = __gcd(n, b);
    n /= y;
    const ll z = __gcd(n, c);
    n /= z;
    if (n > 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << x - 1 << " " << y - 1 << " " << z - 1 << endl;
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