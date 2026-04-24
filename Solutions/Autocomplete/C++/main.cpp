// Problem: Autocomplete
// Link to the problem: https://codeforces.com/contest/53/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, ans;
    cin >> s;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (t.find(s) == 0)
        {
            if (ans.empty())
            {
                ans = t;
            }
            else
            {
                ans = min(ans, t);
            }
        }
    }
    ans = ans.empty() ? s : ans;
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