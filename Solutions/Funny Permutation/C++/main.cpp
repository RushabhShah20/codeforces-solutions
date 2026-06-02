// Problem: Funny Permutation
// Link to the problem: https://codeforces.com/contest/1741/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        for (ll i = n; i >= 4; i -= 2)
        {
            cout << i - 1 << " " << i << " ";
        }
        cout << 1 << " " << 2 << " " << 3 << " " << endl;
    }
    else
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
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