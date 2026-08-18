// Problem: Santa Claus and a Place in a Class
// Link to the problem: https://codeforces.com/contest/748/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    const ll p = 2 * m;
    const ll a = (k - 1) / p + 1, b = (k - 1) % p / 2 + 1;
    const char c = k & 1 ? 'L' : 'R';
    cout << a << " " << b << " " << c << endl;
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