// Problem: Present from Lena
// Link to the problem: https://codeforces.com/contest/118/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < 2 * n + 1; i++)
    {
        const ll k = min(i, 2 * n - i);
        for (ll j = 0; j <= n + k; j++)
        {
            const ll x = min(j, 2 * n - j) - n + k;
            if (j >= n - k && j <= n + k)
            {
                if (j > n - k)
                {
                    cout << " ";
                }
                cout << x;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
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