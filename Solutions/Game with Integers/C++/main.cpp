// Problem: Game with Integers
// Link to the problem: https://codeforces.com/contest/1899/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 3 != 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
