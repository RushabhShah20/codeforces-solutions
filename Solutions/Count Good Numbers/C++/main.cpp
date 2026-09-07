// Problem: Count Good Numbers
// Link to the problem: https://codeforces.com/contest/2125/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const ll n)
{
    const ll ans = n - (n / 2 + n / 3 + n / 5 + n / 7 - n / 6 - n / 10 - n / 14 - n / 15 - n / 21 - n / 35 + n / 30 + n / 42 + n / 70 + n / 105 - n / 210);
    return ans;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    const ll ans = count(r) - count(l - 1);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}