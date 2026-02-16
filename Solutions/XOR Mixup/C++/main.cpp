// Problem: XOR Mixup
// Link to the problem: https://codeforces.com/contest/1698/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll XOR(const vector<ll> &a, const ll j)
{
    const ll n = a.size();
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i != j)
        {
            ans ^= a[i];
        }
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        b[i] = XOR(a, i);
    }
    for (ll i = 0; i < n; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            cout << b[i] << endl;
            return;
        }
    }
    cout << 0 << endl;
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