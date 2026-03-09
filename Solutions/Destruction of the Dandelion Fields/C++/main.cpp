// Problem: Destruction of the Dandelion Fields
// Link to the problem: https://codeforces.com/contest/2148/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), e, o;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e.push_back(a[i]);
        }
        else
        {
            o.push_back(a[i]);
        }
    }
    if (o.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(o.begin(), o.end(), greater<>());
        ll ans = 0;
        for (ll i = 0; i < (o.size() + 1) / 2; i++)
        {
            ans += o[i];
        }
        for (ll i = 0; i < e.size(); i++)
        {
            ans += e[i];
        }
        cout << ans << endl;
    }
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