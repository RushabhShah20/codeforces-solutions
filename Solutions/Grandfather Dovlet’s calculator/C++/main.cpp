// Problem: Grandfather Dovlet’s calculator
// Link to the problem: https://codeforces.com/contest/620/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    unordered_map<ll, ll> m = {{0, 6}, {1, 2}, {2, 5}, {3, 5}, {4, 4}, {5, 5}, {6, 6}, {7, 3}, {8, 7}, {9, 6}};
    for (ll i = a; i <= b; i++)
    {
        ll x = i;
        while (x > 0)
        {
            ans += m[x % 10];
            x /= 10;
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