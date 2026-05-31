// Problem: A Wonderful Contest
// Link to the problem: https://codeforces.com/contest/2222/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bool y = false;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 100)
        {
            y = true;
        }
    }
    const string ans = y ? "Yes" : "No";
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