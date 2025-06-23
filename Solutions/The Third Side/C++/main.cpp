// Problem: The Third Side
// Link to the problem: https://codeforces.com/contest/2074/problem/B
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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll ans = sum - n + 1;
        cout << ans << endl;
    }
    return 0;
}