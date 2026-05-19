// Problem: Array and Peaks
// Link to the problem: https://codeforces.com/contest/1513/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll m = n & 1 ? n / 2 : (n - 1) / 2;
    if (k > m)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n, 0);
    ll j = n;
    for (ll i = 1; i < n; i += 2)
    {
        if (k == 0)
        {
            break;
        }
        ans[i] = j;
        j--;
        k--;
    }
    j = 1;
    for (ll i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = j;
            j++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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