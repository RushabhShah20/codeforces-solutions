// Problem: Zero Array
// Link to the problem: https://codeforces.com/contest/1201/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll maxVal = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        maxVal = max(maxVal, x);
        sum += x;
    }
    if (sum % 2 == 0 && maxVal <= sum - maxVal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}