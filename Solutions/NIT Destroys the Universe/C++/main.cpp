// Problem: NIT Destroys the Universe
// Link to the problem: https://codeforces.com/contest/1696/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, zero = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
    }
    ll l = 0, r = n - 1;
    while (a[l] == 0)
    {
        l++;
    }
    while (a[r] == 0)
    {
        r--;
    }
    bool x = false;
    for (ll i = l; i <= r; i++)
    {
        if (a[i] == 0)
        {
            x = true;
            break;
        }
    }
    if (zero == n)
    {
        cout << 0 << endl;
    }
    else if (x == false)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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