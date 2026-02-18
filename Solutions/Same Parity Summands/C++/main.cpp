// Problem: Same Parity Summands
// Link to the problem: https://codeforces.com/contest/1352/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if ((n - (k - 1)) % 2 != 0 && (n - (k - 1)) > 0)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << n - (k - 1) << endl;
        return;
    }
    if ((n - (2 * (k - 1))) % 2 == 0 && (n - (2 * (k - 1))) > 0)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < k - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << n - (2 * (k - 1)) << endl;
        return;
    }
    cout << "NO" << endl;
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