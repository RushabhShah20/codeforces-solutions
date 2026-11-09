// Problem: Sort Zero
// Link to the problem: https://codeforces.com/contest/1712/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll ans = m.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i != n - 1 && a[i] > a[i + 1])
        {
            break;
        }
        m[a[i]]--;
        if (m[a[i]] == 0)
        {
            m.erase(a[i]);
            s.erase(a[i]);
        }
        else
        {
            s.insert(a[i]);
        }
        if (s.size() == 0)
        {
            ans = min(ans, (ll)m.size());
        }
    }
    cout << ans << endl;
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