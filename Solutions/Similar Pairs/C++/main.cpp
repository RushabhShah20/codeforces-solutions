// Problem: Similar Pairs
// Link to the problem: https://codeforces.com/contest/1360/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] & 1 ? x++ : y++;
    }
    if (!(x & 1) && !(y & 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(a.begin(), a.end());
        for (ll i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
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