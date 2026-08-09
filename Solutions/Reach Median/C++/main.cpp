// Problem: Reach Median
// Link to the problem: https://codeforces.com/contest/1037/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll m = n / 2;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += i < m ? (a[i] > k ? a[i] - k : 0) : (i > m ? (a[i] < k ? k - a[i] : 0) : (abs(a[i] - k)));
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
    solve();
    return 0;
}