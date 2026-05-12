// Problem: Waiting for...
// Link to the problem: https://codeforces.com/contest/2038/problem/J
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'P')
        {
            ll p;
            cin >> p;
            x += p;
        }
        else
        {
            ll b;
            cin >> b;
            if (x < b)
            {
                cout << "YES" << endl;
                x = 0;
            }
            else
            {
                cout << "NO" << endl;
                x -= b;
            }
        }
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