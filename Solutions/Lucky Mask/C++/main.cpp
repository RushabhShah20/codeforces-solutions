// Problem: Lucky Mask
// Link to the problem: https://codeforces.com/contest/146/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    a++;
    while (true)
    {
        ll x = 0;
        string s = to_string(a);
        const ll n = s.size();
        for (ll i = 0; i < n; i++)
        {
            const char c = s[i];
            if (c == '4' || c == '7')
            {
                x = 10 * x + (c - '0');
            }
        }
        if (x == b)
        {
            cout << a << endl;
            return;
        }
        a++;
    }
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