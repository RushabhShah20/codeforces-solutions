// Problem: Two Buttons
// Link to the problem: https://codeforces.com/contest/520/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    while (n != m)
    {
        if (m > n && !(m & 1))
        {
            m >>= 1;
        }
        else
        {
            m += 1;
        }
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
    solve();
    return 0;
}