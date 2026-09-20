// Problem: Rumb Needs a Hand
// Link to the problem: https://codeforces.com/contest/2264/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != i + 1)
        {
            b.push_back(i);
        }
    }
    const ll m = b.size();
    ll l = 0, r = m - 1;
    while (l <= r)
    {
        swap(a[b[l]], a[b[r]]);
        l++;
        r--;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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