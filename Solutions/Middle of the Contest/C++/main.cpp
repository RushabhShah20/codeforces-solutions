// Problem: Middle of the Contest
// Link to the problem: https://codeforces.com/contest/1133/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll a = (60 * stoll(s.substr(0, 2)) + stoll(s.substr(3, 2)) + (60 * stoll(t.substr(0, 2)) + stoll(t.substr(3, 2)))) / 2;
    string ans = to_string(a / 60) + ":" + to_string(a % 60);
    if (ans.size() == 3)
    {
        ans.insert(0, 1, '0');
        ans.insert(3, 1, '0');
    }
    if (ans.size() == 4)
    {
        if (ans[2] == ':')
        {
            ans.insert(3, 1, '0');
        }
        else
        {
            ans.insert(0, 1, '0');
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