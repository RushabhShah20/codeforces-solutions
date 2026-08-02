// Problem: Maximums
// Link to the problem: https://codeforces.com/contest/1326/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        const ll y = x + mx;
        mx = max(mx, y);
        cout << y << " ";
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
    solve();
    return 0;
}