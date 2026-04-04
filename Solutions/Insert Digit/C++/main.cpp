// Problem: Insert Digit
// Link to the problem: https://codeforces.com/contest/1811/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    char d;
    cin >> n >> d;
    string s;
    cin >> s;
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (!x && s[i] < d)
        {
            cout << d;
            x = true;
        }
        cout << s[i];
    }
    if (!x)
    {
        cout << d;
    }
    cout << endl;
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