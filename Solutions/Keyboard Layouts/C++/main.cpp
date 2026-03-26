// Problem: Keyboard Layouts
// Link to the problem: https://codeforces.com/contest/831/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b, s;
    cin >> a >> b >> s;
    unordered_map<char, char> m;
    for (ll i = 0; i < 26; i++)
    {
        m[a[i]] = b[i];
    }
    const ll n = s.size();
    string ans(n, ' ');
    for (ll i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            ans[i] = s[i];
        }
        else
        {
            if (islower(s[i]))
            {
                ans[i] = m[s[i]];
            }
            else
            {
                ans[i] = toupper(m[tolower(s[i])]);
            }
        }
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