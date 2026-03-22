// Problem: Divide and Conquer
// Link to the problem: https://codeforces.com/contest/1762/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = 1e9;
    for (ll i = 0; i < n; ++i)
    {
        ll x = 0;
        ll num = arr[i];
        while ((num % 2) == (arr[i] % 2))
        {
            num /= 2;
            x++;
        }
        ans = min(ans, x);
    }
    cout << ans << endl;
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