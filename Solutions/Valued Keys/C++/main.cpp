// Problem: Valued Keys
// Link to the problem: https://codeforces.com/contest/801/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string x, y;
    cin >> x >> y;
    const ll n = x.size();
    for (ll i = 0; i < n; i++)
    {
        if (x[i] < y[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << y << endl;
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