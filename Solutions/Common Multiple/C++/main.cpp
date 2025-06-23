// Problem: Common Multiple
// Link to the problem: https://codeforces.com/contest/2103/problem/A
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
        set<int> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        cout << s.size() << endl;
    }
    return 0;
}