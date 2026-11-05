// Problem: Coupons and Discounts
// Link to the problem: https://codeforces.com/contest/731/problem/B
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
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] < 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] & 1)
        {
            a[i]--;
            a[i + 1]--;
        }
    }
    const string ans = a[n - 1] & 1 ? "NO" : "YES";
    cout << ans << endl;
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