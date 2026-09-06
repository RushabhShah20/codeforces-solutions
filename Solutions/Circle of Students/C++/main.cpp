// Problem: Circle of Students
// Link to the problem: https://codeforces.com/contest/1203/problem/A
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
        ll z;
        cin >> z;
        a[i] = z - 1;
    }
    bool x = true, y = true;
    for (ll i = 0; i < n; i++)
    {
        if ((a[i] + 1) % n != a[(i + 1) % n])
        {
            x = false;
        }
        if ((a[i] - 1 + n) % n != a[(i + 1) % n])
        {
            y = false;
        }
    }
    const string ans = x || y ? "YES" : "NO";
    cout << ans << endl;
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