// Problem: Currency System in Geraldion
// Link to the problem: https://codeforces.com/contest/560/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
    }
    const ll ans = mn != 1 ? 1 : -1;
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