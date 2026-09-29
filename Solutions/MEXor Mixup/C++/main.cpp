// Problem: MEXor Mixup
// Link to the problem: https://codeforces.com/contest/1567/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll getXor(const ll n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    if (n % 4 == 1)
    {
        return 1;
    }
    if (n % 4 == 2)
    {
        return n + 1;
    }
    return 0;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll x = getXor(a - 1);
    const ll ans = x == b ? a : ((x ^ b) != a ? a + 1 : a + 2);
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