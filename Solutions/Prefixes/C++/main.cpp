// Problem: Prefixes
// Link to the problem: https://codeforces.com/contest/1216/problem/A
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
    for (ll i = 0; i < n; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == 'a')
            {
                s[i] = 'b';
            }
            else
            {
                s[i] = 'a';
            }
            ans++;
        }
    }
    cout << ans << endl;
    cout << s << endl;
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