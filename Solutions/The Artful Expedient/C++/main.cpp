// Problem: The Artful Expedient
// Link to the problem: https://codeforces.com/contest/869/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

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
        cin >> b[i];
        s.insert(b[i]);
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (s.count(a[i] ^ b[j]))
            {
                x++;
            }
        }
    }
    const string ans = x & 1 ? "Koyomi" : "Karen";
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