// Problem: Two Bags of Potatoes
// Link to the problem: https://codeforces.com/contest/239/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll y, k, n;
    cin >> y >> k >> n;
    vector<ll> ans;
    for (ll i = n / k; i >= 1; i--)
    {
        const ll x = i * k - y;
        if (x > 0)
        {
            ans.push_back(x);
        }
        else
        {
            break;
        }
    }
    sort(ans.begin(), ans.end());
    const ll m = ans.size();
    if (m == 0)
    {
        cout << -1 << endl;
        return;
    }
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