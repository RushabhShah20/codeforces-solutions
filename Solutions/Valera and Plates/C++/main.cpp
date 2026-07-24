// Problem: Valera and Plates
// Link to the problem: https://codeforces.com/contest/369/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += z == 1 ? 1 : 0;
        y += z == 2 ? 1 : 0;
    }
    const ll a = max(0LL, x - m), b = max(0LL, y - (k + max(0LL, m - x))), ans = a + b;
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