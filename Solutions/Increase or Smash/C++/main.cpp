// Problem: Increase or Smash
// Link to the problem: https://codeforces.com/contest/2152/problem/A
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
        cout << (m.size() * 2) - 1 << endl;
    }
    return 0;
}