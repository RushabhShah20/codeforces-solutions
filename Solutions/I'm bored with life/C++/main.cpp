// Problem: I'm bored with life
// Link to the problem: https://codeforces.com/contest/822/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll fact(const ll n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll ans = fact(min(a, b));
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