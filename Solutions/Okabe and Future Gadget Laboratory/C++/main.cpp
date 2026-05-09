// Problem: Okabe and Future Gadget Laboratory
// Link to the problem: https://codeforces.com/contest/821/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            bool z = false;
            if (a[i][j] == 1)
            {
                continue;
            }
            for (ll x = 0; x < n; x++)
            {
                for (ll y = 0; y < n; y++)
                {
                    if (a[i][j] == a[i][x] + a[y][j])
                    {
                        z = true;
                        break;
                    }
                }
            }
            if (!z)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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