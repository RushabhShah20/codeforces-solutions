// Problem: Voting for Photos
// Link to the problem: https://codeforces.com/contest/637/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    ll mx = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        mx = max(mx, m[a[i]]);
    }
    m.clear();
    for (ll i = 0; i < n; i++)
    {
        m[a[i]]++;
        if (m[a[i]] == mx)
        {
            cout << a[i] << endl;
            return;
        }
    }
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