// Problem: Jumping Ball
// Link to the problem: https://codeforces.com/contest/725/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '<')
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '>')
        {
            ans++;
        }
        else
        {
            break;
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