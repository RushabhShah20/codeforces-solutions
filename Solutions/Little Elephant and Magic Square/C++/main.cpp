// Problem: Little Elephant and Magic Square
// Link to the problem: https://codeforces.com/contest/259/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<vector<ll>> a(3, vector<ll>(3));
    ll x = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            x += a[i][j];
        }
    }
    const ll y = x / 2;
    a[0][0] = y - (a[0][1] + a[0][2]);
    a[1][1] = y - (a[1][0] + a[1][2]);
    a[2][2] = y - (a[2][0] + a[2][1]);
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
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