// Problem: Odd Set
// Link to the problem: https://codeforces.com/contest/1542/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, e = 0, o = 0;
    cin >> n;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (e == o)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}