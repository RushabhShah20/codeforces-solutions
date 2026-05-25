// Problem: Long Long
// Link to the problem: https://codeforces.com/contest/1843/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    bool a = true;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > 0)
        {
            if (!a)
            {
                y++;
            }
            a = true;
        }
        else if (z < 0)
        {
            a = false;
        }
        x += abs(z);
    }
    if (!a)
    {
        y++;
    }
    cout << x << " " << y << endl;
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