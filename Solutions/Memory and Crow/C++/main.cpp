// Problem: Memory and Crow
// Link to the problem: https://codeforces.com/contest/712/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        ans[i] = a[i + 1] + a[i];
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
    solve();
    return 0;
}