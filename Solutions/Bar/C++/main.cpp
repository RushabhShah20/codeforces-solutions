// Problem: Bar
// Link to the problem: https://codeforces.com/contest/56/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    const set<string> h = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (isdigit(s[0]))
        {
            const ll x = stoll(s);
            if (x < 18)
            {
                ans++;
            }
        }
        else
        {
            if (h.find(s) != h.end())
            {
                ans++;
            }
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