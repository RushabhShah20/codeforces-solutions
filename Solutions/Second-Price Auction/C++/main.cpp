// Problem: Second-Price Auction
// Link to the problem: https://codeforces.com/contest/386/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MIN, y = LLONG_MIN, j = -1;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > x)
        {
            y = x;
            x = z;
            j = i + 1;
        }
        else if (z > y && z != x)
        {
            y = z;
        }
    }
    cout << j << " " << y << endl;
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