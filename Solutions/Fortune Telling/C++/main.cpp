// Problem: Fortune Telling
// Link to the problem: https://codeforces.com/contest/59/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MAX, y = LLONG_MAX, s = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z & 1)
        {
            x = min(x, z);
        }
        else
        {
            y = min(y, z);
        }
        s += z;
    }
    if (s & 1)
    {
        cout << s << endl;
    }
    else
    {
        if (x == LLONG_MAX)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << s - x << endl;
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