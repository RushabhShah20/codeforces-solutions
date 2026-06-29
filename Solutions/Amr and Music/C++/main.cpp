// Problem: Amr and Music
// Link to the problem: https://codeforces.com/contest/507/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (k >= a[i].first)
        {
            k -= a[i].first;
            ans.push_back(a[i].second);
        }
        else
        {
            break;
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