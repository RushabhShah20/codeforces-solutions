// Problem: Irrational problem
// Link to the problem: https://codeforces.com/contest/68/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p1, p2, p3, p4, a, b;
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    ll ans = 0;
    for (ll i = a; i <= b; i++)
    {
        const ll j = i % p1 % p2 % p3 % p4;
        ans += i == j ? 1 : 0;
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
    solve();
    return 0;
}