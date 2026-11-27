// Problem: Assembly via Minimums
// Link to the problem: https://codeforces.com/contest/1857/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll k = (n * (n - 1)) >> 1;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    vector<ll> ans = {a[0]};
    ll j = 1;
    for (ll i = 0; i < k;)
    {
        ans.push_back(a[i]);
        j++;
        i += j;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}