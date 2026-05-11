// Problem: Sum of Three
// Link to the problem: https://codeforces.com/contest/1886/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 6 || n == 9)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (n % 3 == 0)
        {
            cout << 1 << " " << 4 << " " << n - 5 << endl;
        }
        else
        {
            cout << 1 << " " << 2 << " " << n - 3 << endl;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}