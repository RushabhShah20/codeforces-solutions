// Problem: Group of Students
// Link to the problem: https://codeforces.com/contest/357/problem/A
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
    ll x, y;
    cin >> x >> y;
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (ll i = 0; i < n; i++)
    {
        const ll b = a[i], c = a[n - 1] - a[i];
        if (b >= x && b <= y && c >= x && c <= y)
        {
            cout << i + 2 << endl;
            return;
        }
    }
    cout << 0 << endl;
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