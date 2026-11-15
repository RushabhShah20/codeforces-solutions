// Problem: Fedya and Array
// Link to the problem: https://codeforces.com/contest/1793/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll b = (x - y) << 1;
    cout << b << endl;
    ll a = x;
    while (a > y)
    {
        cout << a << " ";
        a--;
    }
    while (a < x)
    {
        cout << a << " ";
        a++;
    }
    cout << endl;
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