// Problem: Less or Equal
// Link to the problem: https://codeforces.com/contest/977/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (k == 0)
    {
        const ll ans = a[0] == 1 ? -1 : a[0] - 1;
        cout << ans << endl;
        return;
    }
    if (k == n)
    {
        cout << a[n - 1] << endl;
        return;
    }
    const ll ans = a[k - 1] == a[k] ? -1 : a[k - 1];
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