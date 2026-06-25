// Problem: Valera and Antique Items
// Link to the problem: https://codeforces.com/contest/441/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        ll mn = LLONG_MAX;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            mn = min(mn, x);
        }
        if (k > mn)
        {
            ans.push_back(i + 1);
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << ' ';
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