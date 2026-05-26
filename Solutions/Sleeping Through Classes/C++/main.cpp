// Problem: Sleeping Through Classes
// Link to the problem: https://codeforces.com/contest/2173/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0, j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            j = k;
        }
        else if (j > 0)
        {
            j--;
        }
        else
        {
            ans++;
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