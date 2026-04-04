// Problem: Three Strings
// Link to the problem: https://codeforces.com/contest/1301/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    const ll n = a.size();
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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