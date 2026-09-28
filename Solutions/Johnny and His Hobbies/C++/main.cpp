// Problem: Johnny and His Hobbies
// Link to the problem: https://codeforces.com/contest/1362/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    ll ans = -1;
    for (ll j = 1; j <= 1024; j++)
    {
        set<ll> t;
        for (ll i = 0; i < n; i++)
        {
            t.insert(a[i] ^ j);
        }
        if (s == t)
        {
            ans = j;
            break;
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