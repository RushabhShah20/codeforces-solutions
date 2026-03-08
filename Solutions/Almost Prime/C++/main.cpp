// Problem: Almost Prime
// Link to the problem: https://codeforces.com/contest/26/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll primeDivisors(const ll n)
{
    ll ans = 0, count = 0;
    ll m = n;
    while (m % 2 == 0)
    {
        count++;
        m /= 2;
    }
    if (count > 0)
    {
        ans++;
    }
    count = 0;
    for (ll i = 3; i <= n; i += 2)
    {
        while (m % i == 0)
        {
            count++;
            m /= i;
        }
        if (count > 0)
        {
            ans++;
        }
        count = 0;
    }
    return ans;
}

void solve()
{
    ll n, ans = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (primeDivisors(i) == 2)
        {
            ans++;
        }
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