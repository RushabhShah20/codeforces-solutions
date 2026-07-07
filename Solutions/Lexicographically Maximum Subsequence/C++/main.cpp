// Problem: Lexicographically Maximum Subsequence
// Link to the problem: https://codeforces.com/contest/196/problem/A
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
    char c = 'a';
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] >= c)
        {
            ans.append(1, s[i]);
            c = max(c, s[i]);
        }
    }
    reverse(ans.begin(), ans.end());
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