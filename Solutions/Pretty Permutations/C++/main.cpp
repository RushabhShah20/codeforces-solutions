// Problem: Pretty Permutations
// Link to the problem: https://codeforces.com/contest/1541/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    if (n % 2 == 0)
    {
        for (ll i = 0; i < n; i += 2)
        {
            ans[i] = i + 2;
        }
        for (ll i = 1; i < n; i += 2)
        {
            ans[i] = i;
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }
        ans.erase(ans.begin() + 2);
        ans.insert(ans.begin(), 3);
        for (ll i = 3; i < n - 1; i += 2)
        {
            swap(ans[i], ans[i + 1]);
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