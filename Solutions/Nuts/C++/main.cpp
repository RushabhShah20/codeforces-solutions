// Problem: Nuts
// Link to the problem: https://codeforces.com/contest/402/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, a, b, v;
    cin >> k >> a >> b >> v;
    for (ll i = 1; i <= a; i++)
    {
        const ll x = i + min(b, (k - 1) * i);
        if (x * v >= a)
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