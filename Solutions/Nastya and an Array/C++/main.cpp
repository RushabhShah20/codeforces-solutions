// Problem: Nastya and an Array
// Link to the problem: https://codeforces.com/contest/992/problem/A
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
        ll x;
        cin >> x;
        if (x != 0)
        {
            s.insert(x);
        }
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