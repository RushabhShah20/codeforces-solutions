// Problem: Coins
// Link to the problem: https://codeforces.com/contest/58/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    const ll m = v.size();
    sort(v.begin(), v.end(), greater<>());
    ll x = v[0];
    vector<ll> ans = {x};
    for (ll i = 1; i < m; i++)
    {
        if (x % v[i] == 0)
        {
            ans.push_back(v[i]);
            x = v[i];
        }
    }
    const ll k = ans.size();
    for (ll i = 0; i < k; i++)
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
    solve();
    return 0;
}