// Problem: Sum of Two Numbers
// Link to the problem: https://codeforces.com/contest/1788/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, z = 1;
    bool a = false;
    while (n > 0)
    {
        const ll b = n % 10;
        n /= 10;
        if (b & 1)
        {
            if (a)
            {
                x += z * ((b >> 1) + 1);
                y += z * (b >> 1);
            }
            else
            {
                x += z * (b >> 1);
                y += z * ((b >> 1) + 1);
            }
            a = !a;
        }
        else
        {
            x += z * (b >> 1);
            y += z * (b >> 1);
        }
        z *= 10;
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