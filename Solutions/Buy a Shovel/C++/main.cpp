// Problem: Buy a Shovel
// Link to the problem: https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, r;
    cin >> k >> r;
    for (ll i = 1; i <= 10; i++)
    {
        if (k * i % 10 == r || k * i % 10 == 0)
        {
            cout << i << endl;
            return;
        }
    }
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