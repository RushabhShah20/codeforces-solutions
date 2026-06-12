// Problem: XOR = Average
// Link to the problem: https://codeforces.com/contest/1758/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        cout << 1 << " " << 3 << " ";
        for (ll i = 3; i <= n; i++)
        {
            cout << 2 << " ";
        }
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