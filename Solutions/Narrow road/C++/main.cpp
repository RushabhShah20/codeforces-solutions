// Problem: Narrow road
// Link to the problem: https://codeforces.com/contest/1769/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll j = 1, x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        const ll ans = i == 0 ? a[i] - 1 : (max(x + 1, a[i] - j));
        cout << ans << endl;
        x = ans;
        j++;
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