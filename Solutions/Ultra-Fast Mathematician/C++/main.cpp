// Problem: Ultra-Fast Mathematician
// Link to the problem: https://codeforces.com/contest/61/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t, ans;
    cin >> s >> t;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        ans += (((s[i] - '0') ^ (t[i] - '0')) + '0');
    }
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