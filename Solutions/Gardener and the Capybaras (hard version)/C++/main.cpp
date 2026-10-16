// Problem: Gardener and the Capybaras (hard version)
// Link to the problem: https://codeforces.com/contest/1775/problem/A2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (s[1] == 'a')
    {
        cout << s[0] << " " << s[1] << " " << s.substr(2) << endl;
    }
    else
    {
        cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1] << endl;
    }
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