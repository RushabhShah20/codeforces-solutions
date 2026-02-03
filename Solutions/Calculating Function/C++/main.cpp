// Problem: Calculating Function
// Link to the problem: https://codeforces.com/contest/486/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a, b;
    if (n % 2 == 0)
    {
        a = b = n / 2;
    }
    else
    {
        a = n / 2;
        b = (n + 1) / 2;
    }
    const ll ans = ((a * (a + 1)) - (b * b));
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}