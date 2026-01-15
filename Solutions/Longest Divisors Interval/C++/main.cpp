// Problem: Longest Divisors Interval
// Link to the problem: https://codeforces.com/contest/1855/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll i = 1;
    while (n % i == 0)
    {
        i++;
    }
    cout << i - 1 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}