// Problem: Grasshopper And the String
// Link to the problem: https://codeforces.com/contest/733/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isVowel(const char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y';
}

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 1, x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            x = 1;
        }
        else
        {
            x++;
        }
        ans = max(ans, x);
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