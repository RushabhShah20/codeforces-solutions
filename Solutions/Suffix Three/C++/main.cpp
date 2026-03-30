// Problem: Suffix Three
// Link to the problem: https://codeforces.com/contest/1281/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (s.substr(n - 2, 2) == "po")
    {
        cout << "FILIPINO" << endl;
        return;
    }
    if (s.substr(n - 4, 4) == "desu" || s.substr(n - 4, 4) == "masu")
    {
        cout << "JAPANESE" << endl;
        return;
    }
    if (s.substr(n - 5, 5) == "mnida")
    {
        cout << "KOREAN" << endl;
        return;
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