// Problem: MEX rose
// Link to the problem: https://codeforces.com/contest/2149/problem/C
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        ll ans = 0, x = 0;
        for (int i = 0; i < k; i++)
        {
            if (m[i] == 0)
            {
                x++;
            }
        }
        ans = max(x, m[k]);
        cout << (ans) << endl;
    }
    return 0;
}
