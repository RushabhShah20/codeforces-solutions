// Problem: Berland Music
// Link to the problem: https://codeforces.com/contest/1622/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<pair<ll, ll>> x, y;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            x.push_back({a[i], i});
        }
        else
        {
            y.push_back({a[i], i});
        }
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ll j = 0, k = 1;
    vector<ll> ans(n);
    const ll p = x.size(), q = y.size();
    for (ll i = 0; i < p; i++)
    {
        ans[x[i].second] = k;
        k++;
    }
    for (ll i = 0; i < q; i++)
    {
        ans[y[i].second] = k;
        k++;
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