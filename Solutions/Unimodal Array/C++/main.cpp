// Problem: Unimodal Array
// Link to the problem: https://codeforces.com/contest/831/problem/A
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
    ll i = 0;
    while (i < n - 1 && a[i] < a[i + 1])
    {
        i++;
    }
    while (i < n - 1 && a[i] == a[i + 1])
    {
        i++;
    }
    while (i < n - 1 && a[i] > a[i + 1])
    {
        i++;
    }
    const string ans = i == n - 1 ? "YES" : "NO";
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