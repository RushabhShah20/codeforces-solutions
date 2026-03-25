// Problem: Average Numbers
// Link to the problem: https://codeforces.com/contest/134/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (x - a[i] == (n - 1) * a[i])
        {
            ans.push_back(i + 1);
        }
    }
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
    solve();
    return 0;
}