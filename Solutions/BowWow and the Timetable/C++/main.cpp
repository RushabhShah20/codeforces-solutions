// Problem: BowWow and the Timetable
// Link to the problem: https://codeforces.com/contest/1204/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = n & 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            x = false;
        }
    }
    const ll ans = x ? n / 2 : (n + 1) / 2;
    cout << ans << endl;
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