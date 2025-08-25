// Problem: Redstone?
// Link to the problem: https://codeforces.com/contest/2133/problem/A
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
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        bool x = false;
        for (auto i : m)
        {
            if (i.second >= 2)
            {
                x = true;
                break;
            }
        }
        if (x == true)
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
