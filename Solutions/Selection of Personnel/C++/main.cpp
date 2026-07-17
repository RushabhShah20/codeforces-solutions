// Problem: Selection of Personnel
// Link to the problem: https://codeforces.com/contest/630/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll ncr(const ll n, const ll r)
{
    ll ans = 1;
    for (ll i = 1; i <= max(r, n - r); i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = ncr(n, 5) + ncr(n, 6) + ncr(n, 7);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}