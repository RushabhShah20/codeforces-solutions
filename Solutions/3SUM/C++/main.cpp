// Problem: 3SUM
// Link to the problem: https://codeforces.com/contest/1692/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> m(10, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x % 10]++;
    }
    if (m[1] >= 3)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[0] >= 2 && m[3] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[2] >= 2 && m[9] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[3] >= 2 && m[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[4] >= 2 && m[5] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[5] >= 2 && m[3] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[6] >= 2 && m[1] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[7] >= 2 && m[9] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[8] >= 2 && m[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[9] >= 2 && m[5] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[0] >= 1 && m[1] >= 1 && m[2] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[0] >= 1 && m[4] >= 1 && m[9] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[0] >= 1 && m[5] >= 1 && m[8] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[0] >= 1 && m[6] >= 1 && m[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[1] >= 1 && m[3] >= 1 && m[9] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[1] >= 1 && m[4] >= 1 && m[8] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[1] >= 1 && m[5] >= 1 && m[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[2] >= 1 && m[3] >= 1 && m[8] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[2] >= 1 && m[4] >= 1 && m[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[2] >= 1 && m[5] >= 1 && m[6] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[3] >= 1 && m[4] >= 1 && m[6] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (m[6] >= 1 && m[8] >= 1 && m[9] >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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