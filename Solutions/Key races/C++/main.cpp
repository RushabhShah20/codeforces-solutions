// Problem: Key races
// Link to the problem: https://codeforces.com/contest/835/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    const ll x = 2 * t1 + s * v1, y = 2 * t2 + s * v2;
    const string ans = x > y ? "Second" : (x < y ? "First" : "Friendship");
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