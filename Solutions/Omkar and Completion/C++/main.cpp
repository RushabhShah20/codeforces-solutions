// Problem: Omkar and Completion
// Link to the problem: https://codeforces.com/contest/1372/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 1000 << " ";
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