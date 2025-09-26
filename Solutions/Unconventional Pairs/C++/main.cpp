// Problem: Unconventional Pairs
// Link to the problem: https://codeforces.com/contest/2149/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll zeroes = 0, negOnes = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = 0; i < a.size(); i += 2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
