// Problem: Chips
// Link to the problem: https://codeforces.com/contest/92/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll i = 1;
    while (m >= i)
    {
        m -= i;
        i++;
        if (i == n + 1)
        {
            i = 1;
        }
    }
    cout << m << endl;
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