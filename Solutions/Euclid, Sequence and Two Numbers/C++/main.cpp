// Problem: Euclid, Sequence and Two Numbers
// Link to the problem: https://codeforces.com/contest/2234/problem/A
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
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i - 1] % a[i] != a[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << a[0] << " " << a[1] << endl;
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