// Problem: Everyone is a Winner!
// Link to the problem: https://codeforces.com/contest/1263/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    ans.push_back(0);
    for (ll i = 1; i * i <= n; i++)
    {
        ans.push_back(i);
        if (i != n / i)
        {
            ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
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