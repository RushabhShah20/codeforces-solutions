// Problem: Was there an Array?
// Link to the problem: https://codeforces.com/contest/2069/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b(n - 2);
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> b[i];
    }
    for (ll i = 1; i < n - 3; i++)
    {
        if (b[i] == 0 && b[i - 1] == 1 && b[i + 1] == 1)
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