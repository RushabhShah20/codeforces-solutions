// Problem: Mysterious numbers - 1
// Link to the problem: https://codeforces.com/contest/171/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = 0;
    while (b > 0)
    {
        c = 10 * c + b % 10;
        b /= 10;
    }
    const ll ans = a + c;
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