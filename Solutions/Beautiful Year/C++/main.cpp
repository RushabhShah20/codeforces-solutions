// Problem: Beautiful Year
// Link to the problem: https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll y;
    cin >> y;
    for (ll i = y + 1; i <= 9012; i++)
    {
        string s = to_string(i);
        set<char> t(s.begin(), s.end());
        if (t.size() == 4)
        {
            cout << i << endl;
            return;
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
    solve();
    return 0;
}