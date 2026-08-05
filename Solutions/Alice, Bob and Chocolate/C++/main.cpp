// Problem: Alice, Bob and Chocolate
// Link to the problem: https://codeforces.com/contest/6/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0, y = 0, b = 0, c = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        if (b <= c)
        {
            x++;
            b += a[l];
            l++;
        }
        else
        {
            y++;
            c += a[r];
            r--;
        }
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
    solve();
    return 0;
}