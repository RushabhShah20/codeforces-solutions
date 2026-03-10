// Problem: Vanya and Fence
// Link to the problem: https://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, h, ans = 0;
    cin >> n >> h;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > h)
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
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