// Problem: ASCII Art Contest
// Link to the problem: https://codeforces.com/contest/2172/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll g, c, l;
    cin >> g >> c >> l;
    if (max({g, c, l}) - min({g, c, l}) < 10)
    {
        cout << "final " << g + c + l - max({g, c, l}) - min({g, c, l}) << endl;
    }
    else
    {
        cout << "check again" << endl;
    }
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