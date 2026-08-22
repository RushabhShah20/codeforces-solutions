// Problem: Asphalting Roads
// Link to the problem: https://codeforces.com/contest/583/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<bool> a(n, false), b(n, false);
    for (ll i = 0; i < n * n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (!a[x - 1] && !b[y - 1])
        {
            a[x - 1] = true;
            b[y - 1] = true;
            cout << i + 1 << " ";
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
    solve();
    return 0;
}