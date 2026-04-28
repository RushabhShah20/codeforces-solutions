// Problem: Generate Permutation
// Link to the problem: https://codeforces.com/contest/2001/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        ll m = n;
        while (m >= 1)
        {
            cout << m << " ";
            m -= 2;
        }
        m += 3;
        while (m < n)
        {
            cout << m << " ";
            m += 2;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}