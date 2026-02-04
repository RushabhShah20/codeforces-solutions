// Problem: Hulk
// Link to the problem: https://codeforces.com/contest/705/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans;
    for (ll i = 0; i < n; i++)
    {
        ans += "I ";
        if (i % 2 == 0)
        {
            ans += "hate ";
        }
        else
        {
            ans += "love ";
        }
        if (i < n - 1)
        {
            ans += "that ";
        }
    }
    ans += "it";
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}