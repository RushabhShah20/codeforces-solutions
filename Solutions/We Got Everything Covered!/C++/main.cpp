// Problem: We Got Everything Covered!
// Link to the problem: https://codeforces.com/contest/1925/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string ans;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            for (ll j = 0; j < k; j++)
            {
                ans.append(1, 'a' + j);
            }
        }
        else
        {
            for (ll j = k - 1; j >= 0; j--)
            {
                ans.append(1, 'a' + j);
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