// Problem: The Great Julya Calendar
// Link to the problem: https://codeforces.com/contest/331/problem/C1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll find(const ll n)
{
    if (n == 0)
    {
        return 0;
    }
    ll x = 0, y = n;
    while (y > 0)
    {
        x = max(x, y % 10);
        y /= 10;
    }
    return find(n - x) + 1;
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = find(n);
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