// Problem: Lucky Numbers
// Link to the problem: https://codeforces.com/contest/630/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
ll power(const ll b, const ll e)
{
    if (e <= 1)
    {
        return b;
    }
    return b * power(b, e - 1);
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = power(2, n + 1) - 2;
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