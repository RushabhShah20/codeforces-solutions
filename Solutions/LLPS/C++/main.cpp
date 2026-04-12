// Problem: LLPS
// Link to the problem: https://codeforces.com/contest/202/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<ll> a(26, 0);
    for (const char c : s)
    {
        a[c - 'a']++;
    }
    for (ll i = 25; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            const string ans(a[i], i + 'a');
            cout << ans << endl;
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