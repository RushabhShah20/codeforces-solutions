// Problem: Ashmal
// Link to the problem: https://codeforces.com/contest/2180/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> a(n);
    string ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            ans = a[i];
        }
        else
        {
            string x = ans + a[i], y = a[i] + ans;
            if (x < y)
            {
                ans = x;
            }
            else
            {
                ans = y;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}