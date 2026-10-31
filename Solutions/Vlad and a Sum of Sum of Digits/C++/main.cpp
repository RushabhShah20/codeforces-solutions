// Problem: Vlad and a Sum of Sum of Digits
// Link to the problem: https://codeforces.com/contest/1926/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &a)
{
    ll n;
    cin >> n;
    const ll ans = a[n];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<ll> a(200001);
    for (ll i = 1; i <= 200000; i++)
    {
        ll x = i;
        while (x > 0)
        {
            a[i] += x % 10;
            x /= 10;
        }
    }
    for (ll i = 1; i <= 200000; i++)
    {
        a[i] += a[i - 1];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(a);
    }
    return 0;
}