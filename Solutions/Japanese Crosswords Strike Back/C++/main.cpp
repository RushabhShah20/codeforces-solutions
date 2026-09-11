// Problem: Japanese Crosswords Strike Back
// Link to the problem: https://codeforces.com/contest/884/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        y += z;
    }
    const string ans = x == y + n - 1 ? "YES" : "NO";
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