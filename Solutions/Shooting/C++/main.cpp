// Problem: Shooting
// Link to the problem: https://codeforces.com/contest/1216/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += i * a[i].first + 1;
    }
    cout << ans << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << a[i].second << " ";
    }
    cout << endl;
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