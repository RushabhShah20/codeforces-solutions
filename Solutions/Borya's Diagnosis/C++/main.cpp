// Problem: Borya's Diagnosis
// Link to the problem: https://codeforces.com/contest/879/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll a, d;
        cin >> a >> d;
        if (s.empty())
        {
            s.insert(a);
        }
        else
        {
            const ll x = *s.rbegin();
            while (a <= x)
            {
                a += d;
            }
            s.insert(a);
        }
    }
    const ll ans = *s.rbegin();
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