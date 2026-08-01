// Problem: Sasha and His Trip
// Link to the problem: https://codeforces.com/contest/1113/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = min(n - 1, k), x = min(n - 1, k);
    for (int i = 1; i < n; i++)
    {
        if (n - i > x)
        {
            ans += i + 1;
            x++;
        }
        x--;
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