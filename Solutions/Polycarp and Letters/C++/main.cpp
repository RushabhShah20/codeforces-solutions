// Problem: Polycarp and Letters
// Link to the problem: https://codeforces.com/contest/864/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll j = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            j++;
        }
        else
        {
            const string t = s.substr(i - j, j);
            const unordered_set<char> m(t.begin(), t.end());
            ans = max(ans, (ll)m.size());
            j = 0;
        }
    }
    const string t = s.substr(n - j, j);
    const unordered_set<char> m(t.begin(), t.end());
    ans = max(ans, (ll)m.size());
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