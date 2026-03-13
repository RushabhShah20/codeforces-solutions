// Problem: Fafa and his Company
// Link to the problem: https://codeforces.com/contest/935/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 1;
    cin >> n;
    if (n == 2)
    {
        cout << ans << endl;
        return;
    }
    if (n % 2 == 0)
    {
        ans++;
        if (n / 2 != 2)
        {
            ans++;
        }
    }
    for (ll i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (n / i != i)
            {
                ans++;
            }
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