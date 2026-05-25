// Problem: BerOS file system
// Link to the problem: https://codeforces.com/contest/20/problem/A
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
        if (s[i] == '/')
        {
            if (t.back() != '/' || t.empty())
            {
                t.append(1, s[i]);
            }
        }
        else
        {
            t.append(1, s[i]);
        }
    }
    for (int i = t.size() - 1; i >= 1; i--)
    {
        if (t[i] == '/')
        {
            t.pop_back();
        }
        else
        {
            break;
        }
    }
    const string ans = t;
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