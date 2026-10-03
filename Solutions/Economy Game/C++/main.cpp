// Problem: Economy Game
// Link to the problem: https://codeforces.com/contest/681/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i <= n / 1234567; i++)
    {
        for (ll j = 0; j <= n / 123456; j++)
        {
            const ll x = n - (i * 1234567 + j * 123456);
            if (x >= 0 && x % 1234 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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