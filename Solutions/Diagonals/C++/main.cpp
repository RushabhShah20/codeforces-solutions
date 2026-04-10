// Problem: Diagonals
// Link to the problem: https://codeforces.com/contest/1995/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    k -= n;
    ll ans = 1, x = 2 * (n - 1);
    while (k > 0)
    {
        if (k >= x)
        {
            k -= x;
            ans += 2;
            x -= 2;
        }
        else
        {
            k -= x / 2;
            ans++;
            break;
        }
    }
    if (k > 0)
    {
        ans++;
    }
    cout << ans << endl;
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