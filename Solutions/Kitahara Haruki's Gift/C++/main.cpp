// Problem: Kitahara Haruki's Gift
// Link to the problem: https://codeforces.com/contest/433/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 100)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    const string ans = a & 1 ? "NO" : ((b & 1) && a <= 1 ? "NO" : "YES");
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