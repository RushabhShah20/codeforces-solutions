// Problem: AvtoBus
// Link to the problem: https://codeforces.com/contest/1679/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n < 4 || n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        const ll x = ((n + 5) / 6), y = (n / 4);
        cout << x << " " << y << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}