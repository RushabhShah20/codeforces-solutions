// Problem: Ehab and subtraction
// Link to the problem: https://codeforces.com/contest/1088/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    const vector<ll> a(s.begin(), s.end());
    const ll m = a.size();
    cout << a[0] << endl;
    for (ll i = 1; i < min(m, k); i++)
    {
        cout << a[i] - a[i - 1] << endl;
    }
    for (ll i = min(m, k); i < k; i++)
    {
        cout << 0 << endl;
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