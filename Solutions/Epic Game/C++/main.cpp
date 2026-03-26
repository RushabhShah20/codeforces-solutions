// Problem: Epic Game
// Link to the problem: https://codeforces.com/contest/119/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll i = 0;
    while (n > 0)
    {
        if (i % 2 == 0)
        {
            n -= __gcd(n, a);
        }
        else
        {
            n -= __gcd(n, b);
        }
        i++;
    }
    const ll ans = i % 2 == 0 ? 1 : 0;
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