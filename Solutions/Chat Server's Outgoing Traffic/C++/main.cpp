// Problem: Chat Server's Outgoing Traffic
// Link to the problem: https://codeforces.com/contest/5/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    ll ans = 0, x = 0;
    while (getline(cin, s))
    {
        if (s.empty())
        {
            continue;
        }
        if (s[0] == '+')
        {
            x++;
        }
        else if (s[0] == '-')
        {
            x--;
        }
        else
        {
            const ll i = s.find(':');
            ans += x * (s.size() - i - 1);
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