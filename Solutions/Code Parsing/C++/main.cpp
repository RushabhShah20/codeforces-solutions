// Problem: Code Parsing
// Link to the problem: https://codeforces.com/contest/255/problem/B
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
        if (!ans.empty() && s[i] != ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.append(1, s[i]);
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