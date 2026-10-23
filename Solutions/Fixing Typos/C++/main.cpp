// Problem: Fixing Typos
// Link to the problem: https://codeforces.com/contest/363/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    string ans;
    for (ll i = 0; i < n; i++)
    {
        const ll m = ans.size();
        if (m >= 2 && ans[m - 1] == s[i] && ans[m - 2] == s[i])
        {
            continue;
        }
        if (m >= 3 && ans[m - 1] == s[i] && ans[m - 2] == ans[m - 3])
        {
            continue;
        }
        ans.append(1, s[i]);
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