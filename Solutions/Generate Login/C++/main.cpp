// Problem: Generate Login
// Link to the problem: https://codeforces.com/contest/909/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size();
    string ans;
    ans.append(1, s[0]);
    for (ll i = 1; i < n; i++)
    {
        if (s[i] < t[0])
        {
            ans.append(1, s[i]);
        }
        else
        {
            break;
        }
    }
    ans.append(1, t[0]);
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