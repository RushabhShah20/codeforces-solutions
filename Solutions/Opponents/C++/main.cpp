// Problem: Opponents
// Link to the problem: https://codeforces.com/contest/688/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, d, ans = 0, x = 0;
    cin >> n >> d;
    for (ll i = 0; i < d; i++)
    {
        string s;
        cin >> s;
        if (s.find('0') != string::npos)
        {
            x++;
        }
        else
        {
            ans = max(ans, x);
            x = 0;
        }
    }
    ans = max(ans, x);
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