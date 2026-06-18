// Problem: Digits Sequence Dividing
// Link to the problem: https://codeforces.com/contest/1107/problem/A
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
    if (n == 2 && s[0] >= s[1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1) << endl;
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