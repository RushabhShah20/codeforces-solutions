// Problem: Borze
// Link to the problem: https://codeforces.com/contest/32/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, ans;
    cin >> s;
    const ll n = s.size();
    ll i = 0;
    while (i < n)
    {
        if (s[i] == '.')
        {
            ans += '0';
            i++;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                ans += '1';
            }
            else
            {
                ans += '2';
            }
            i += 2;
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