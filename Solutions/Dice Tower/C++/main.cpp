// Problem: Dice Tower
// Link to the problem: https://codeforces.com/contest/225/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    bool x = true;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (k == a || k == b || k == 7 - a || k == 7 - b)
        {
            x = false;
        }
        k = 7 - k;
    }
    const string ans = x ? "YES" : "NO";
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