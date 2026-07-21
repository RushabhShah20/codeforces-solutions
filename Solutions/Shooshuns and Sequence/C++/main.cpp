// Problem: Shooshuns and Sequence
// Link to the problem: https://codeforces.com/contest/222/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i >= k - 1)
        {
            s.insert(a[i]);
        }
    }
    if (s.size() != 1)
    {
        cout << -1 << endl;
        return;
    }
    ll j = -1;
    for (ll i = k - 1; i >= 0; i--)
    {
        if (a[i] != *s.begin())
        {
            j = i;
            break;
        }
    }
    const ll ans = j + 1;
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