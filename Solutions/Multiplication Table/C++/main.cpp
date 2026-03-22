// Problem: Multiplication Table
// Link to the problem: https://codeforces.com/contest/577/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> f;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            f.push_back(i);
            if (i != x / i)
            {
                f.push_back(x / i);
            }
        }
    }
    sort(f.begin(), f.end());
    const ll m = f.size();
    ll ans = 0;
    ll i = 0, j = m - 1;
    while (i <= j)
    {
        if (f[i] <= n && f[j] <= n)
        {
            if (f[i] == f[j])
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
        i++;
        j--;
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