// Problem: Aramic script
// Link to the problem: https://codeforces.com/contest/975/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<vector<ll>> s;
    for (ll i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        const ll m = t.size();
        vector<ll> a(26, 0);
        for (ll j = 0; j < m; j++)
        {
            a[t[j] - 'a']++;
        }
        for (ll j = 0; j < 26; j++)
        {
            if (a[j] > 1)
            {
                a[j] -= a[j] - 1;
            }
        }
        s.insert(a);
    }
    const ll ans = s.size();
    cout << ans << endl;
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