// Problem: Santa Claus and Candies
// Link to the problem: https://codeforces.com/contest/753/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll k = 0, l = 1, r = n;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (m * (m + 1) / 2 <= n)
        {
            k = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << k << endl;
    for (ll i = 1; i < k; i++)
    {
        cout << i << " ";
        n -= i;
    }
    cout << n << endl;
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