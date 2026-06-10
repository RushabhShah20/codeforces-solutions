// Problem: Palindrome, Twelve and Two Terms
// Link to the problem: https://codeforces.com/contest/2234/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 10)
    {
        cout << -1 << endl;
    }
    else if (n % 12 == 10)
    {
        cout << 22 << " " << n - 22 << endl;
    }
    else
    {
        cout << n % 12 << " " << n - (n % 12) << endl;
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