// Problem: Two Binary Strings
// Link to the problem: https://codeforces.com/contest/1861/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll n = a.size();
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
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