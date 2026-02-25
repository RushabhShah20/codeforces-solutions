// Problem: Delete from the Left
// Link to the problem: https://codeforces.com/contest/1005/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    ll ans = n + m, i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0 && s[i] == t[j])
    {
        i--;
        j--;
        ans -= 2;
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