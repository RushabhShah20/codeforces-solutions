// Problem: Monsters
// Link to the problem: https://codeforces.com/contest/1849/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<pair<ll, ll>> h(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        h[i] = (make_pair(a[i], i + 1));
    }
    for (ll i = 0; i < n; i++)
    {
        h[i].first %= k;
        if (h[i].first == 0)
        {
            h[i].first = k;
        }
    }
    sort(h.begin(), h.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         {
        if(x.first!=y.first){return x.first>y.first;}return x.second<y.second; });
    for (ll i = 0; i < n; i++)
    {
        cout << h[i].second << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}