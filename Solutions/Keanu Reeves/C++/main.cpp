// Problem: Keanu Reeves
// Link to the problem: https://codeforces.com/contest/1189/problem/A
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
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            m++;
        }
    }
    if (m == n - m)
    {
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1) << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << s << endl;
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