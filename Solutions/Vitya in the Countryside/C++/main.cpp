// Problem: Vitya in the Countryside
// Link to the problem: https://codeforces.com/contest/719/problem/A
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
    bool x = false;
    for (ll i = 1; i < n; i++)
    {
        x = a[i] > a[i - 1];
    }
    if (n == 1)
    {
        const string ans = a[0] == 0 ? "UP" : (a[0] == 15 ? "DOWN" : "-1");
        cout << ans << endl;
    }
    else
    {
        const string ans = a[n - 1] == 0 ? "UP" : (a[n - 1] == 15 ? "DOWN" : (x ? "UP" : "DOWN"));
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