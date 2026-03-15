// Problem: Construct a Rectangle
// Link to the problem: https://codeforces.com/contest/1622/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] + a[1] == a[2])
    {
        cout << "YES" << endl;
        return;
    }
    if (a[0] == a[1])
    {
        if (a[2] % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a[0] == a[2])
    {
        if (a[1] % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a[1] == a[2])
    {
        if (a[0] % 2 == 0)
        {
            cout << "YES" << endl;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}