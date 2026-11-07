// Problem: Different Distances
// Link to the problem: https://codeforces.com/contest/2233/problem/B
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
        cout << "3 3 2 1 1 2 1 2 2 3 1 3 ";
        for (ll i = 3; i < n; i += 2)
        {
            cout << i + 2 << " " << i + 1 << " " << i + 1 << " " << i + 2 << " ";
            cout << i + 1 << " " << i + 2 << " " << i + 2 << " " << i + 1 << " ";
        }
    }
    else
    {
        for (ll i = 0; i < n; i += 2)
        {
            cout << i + 2 << " " << i + 1 << " " << i + 1 << " " << i + 2 << " ";
            cout << i + 1 << " " << i + 2 << " " << i + 2 << " " << i + 1 << " ";
        }
    }
    cout << endl;
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