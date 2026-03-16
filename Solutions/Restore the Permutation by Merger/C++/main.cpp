// Problem: Restore the Permutation by Merger
// Link to the problem: https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        if (s.count(x) == 0)
        {
            cout << x << " ";
        }
        s.insert(x);
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