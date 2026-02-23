// Problem: Digits
// Link to the problem: https://codeforces.com/contest/2043/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> ans = {1};
    if (n >= 3)
    {
        ans.push_back(3);
    }
    else
    {
        if (d % 3 == 0)
        {
            ans.push_back(3);
        }
    }
    if (d == 5)
    {
        ans.push_back(5);
    }
    if (n >= 3)
    {
        ans.push_back(7);
    }
    else
    {
        if (d == 7)
        {
            ans.push_back(7);
        }
    }
    if (n >= 6)
    {
        ans.push_back(9);
    }
    else if (n >= 3)
    {
        if (d % 3 == 0)
        {
            ans.push_back(9);
        }
    }
    else
    {
        if (d % 9 == 0)
        {
            ans.push_back(9);
        }
    }
    for (const int a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
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