// Problem: Make it Beautiful
// Link to the problem: https://codeforces.com/contest/1783/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, maxVal = INT_MIN, minVal = INT_MAX;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        minVal = min(minVal, a[i]);
        maxVal = max(maxVal, a[i]);
    }
    if (maxVal == minVal)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        sort(a.begin(), a.end());
        a.erase(a.begin() + n - 1);
        a.insert(a.begin(), maxVal);
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}