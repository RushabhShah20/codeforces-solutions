// Problem: Domino Disaster
// Link to the problem: https://codeforces.com/contest/1567/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, ans(n, ' ');
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            ans[i] = 'D';
        }
        else if (s[i] == 'D')
        {
            ans[i] = 'U';
        }
        else
        {
            ans[i] = s[i];
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}