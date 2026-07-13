// Problem: Little Frog
// Link to the problem: https://codeforces.com/contest/53/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 1, y = n;
    for (ll i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << x << " ";
            x++;
        }
        else
        {
            cout << y << " ";
            y--;
        }
    }
    cout << endl;
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