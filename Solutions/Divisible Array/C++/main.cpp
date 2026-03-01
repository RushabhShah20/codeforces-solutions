// Problem: Divisible Array
// Link to the problem: https://codeforces.com/contest/1828/problem/A
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
        for (ll i = 1; i <= n; i++)
        {
            cout << 2 * i << " ";
        }
        cout << endl;
    }
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
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