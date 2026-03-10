// Problem: Polycarp and Coins
// Link to the problem: https://codeforces.com/contest/1551/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 1)
    {
        cout << ((n / 3) + 1) << " " << (n / 3) << endl;
    }
    else if (n % 3 == 2)
    {
        cout << (n / 3) << " " << ((n / 3) + 1) << endl;
    }
    else
    {
        cout << (n / 3) << " " << (n / 3) << endl;
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