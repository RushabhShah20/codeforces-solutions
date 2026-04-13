// Problem: Broken Keyboard
// Link to the problem: https://codeforces.com/contest/1765/problem/B
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
    ll i = 0, j = 0;
    while (i < n)
    {
        if (j & 1)
        {
            if (s[i] != s[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
            i += 2;
        }
        else
        {
            i++;
        }
        j++;
    }
    cout << "YES" << endl;
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