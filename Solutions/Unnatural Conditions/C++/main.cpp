// Problem: Unnatural Conditions
// Link to the problem: https://codeforces.com/contest/1028/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n - 1; i++)
    {
        cout << 4;
    }
    cout << 5 << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << 5;
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