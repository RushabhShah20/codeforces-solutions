// Problem: Unnatural Language Processing
// Link to the problem: https://codeforces.com/contest/1915/problem/D
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
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            if (i >= 2 && (s[i - 2] == 'a' || s[i - 2] == 'e'))
            {
                s.insert(i - 1, 1, '.');
            }
            if (i >= 3 && (s[i - 3] == 'a' || s[i - 3] == 'e'))
            {
                s.insert(i - 1, 1, '.');
            }
        }
    }
    cout << s << endl;
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