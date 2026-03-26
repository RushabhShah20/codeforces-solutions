// Problem: Distinct Digits
// Link to the problem: https://codeforces.com/contest/1228/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        string x = to_string(i);
        unordered_set<char> s(x.begin(), x.end());
        if (x.size() == s.size())
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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