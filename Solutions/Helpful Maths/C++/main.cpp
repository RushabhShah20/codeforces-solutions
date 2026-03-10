// Problem: Helpful Maths
// Link to the problem: https://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    string t;
    for (ll i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            t += s[i];
        }
    }
    sort(t.begin(), t.end());
    string ans;
    for (ll i = 0; i < t.size() - 1; i++)
    {
        if (isdigit(t[i]))
        {
            const string x = to_string(t[i] - '0') + "+";
            ans += x;
        }
    }
    ans += t.back();
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