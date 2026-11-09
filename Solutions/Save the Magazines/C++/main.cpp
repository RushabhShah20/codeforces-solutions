// Problem: Save the Magazines
// Link to the problem: https://codeforces.com/contest/1743/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            j = i;
        }
        else
        {
            if (j != -1 && a[j] > a[i])
            {
                ans += a[j];
                j = i;
            }
            else
            {
                ans += a[i];
            }
        }
    }
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