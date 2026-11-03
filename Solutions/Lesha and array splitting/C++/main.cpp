// Problem: Lesha and array splitting
// Link to the problem: https://codeforces.com/contest/754/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    if (a[n] != 0)
    {
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << 1 << " " << i << endl;
            cout << i + 1 << " " << n << endl;
            return;
        }
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
    solve();
    return 0;
}