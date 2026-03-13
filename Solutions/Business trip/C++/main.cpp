// Problem: Business trip
// Link to the problem: https://codeforces.com/contest/149/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    vector<ll> a(12);
    for (ll i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < 12; i++)
    {
        if (k <= 0)
        {
            break;
        }
        k -= a[i];
        ans++;
    }
    if (k > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
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