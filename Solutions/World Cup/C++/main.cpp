// Problem: World Cup
// Link to the problem: https://codeforces.com/contest/931/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll m = log2(n);
    ll x = 0;
    a--;
    b--;
    while (a != b)
    {
        a >>= 1;
        b >>= 1;
        x++;
    }
    const string ans = x == m ? "Final!" : to_string(x);
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