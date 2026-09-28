// Problem: Gold Rush
// Link to the problem: https://codeforces.com/contest/1829/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool canReach(const ll n, const ll m)
{
    if (n == m)
    {
        return true;
    }
    if (n % 3 != 0 || n < m)
    {
        return false;
    }
    return canReach(n / 3, m) || canReach(2 * n / 3, m);
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    const string ans = canReach(n, m) ? "YES" : "NO";
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