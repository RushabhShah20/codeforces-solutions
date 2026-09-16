// Problem: Company Income Growth
// Link to the problem: https://codeforces.com/contest/39/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 1;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == y)
        {
            ans.push_back(2001 + i);
            y++;
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