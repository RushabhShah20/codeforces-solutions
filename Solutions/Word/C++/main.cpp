// Problem: Word
// Link to the problem: https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            m++;
        }
    }
    string ans;
    if (m > n - m)
    {
        for (ll i = 0; i < n; i++)
        {
            ans += (toupper(s[i]));
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            ans += (tolower(s[i]));
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