// Problem: Final Verdict
// Link to the problem: https://codeforces.com/contest/2078/problem/A
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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == n * x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}