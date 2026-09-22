// Problem: Nirvana
// Link to the problem: https://codeforces.com/contest/1143/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll product(const ll n)
{
    if (n == 0)
    {
        return 1;
    }
    const ll ans = n < 10 ? n : max(n % 10 * product(n / 10), 9 * product(n / 10 - 1));
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = product(n);
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