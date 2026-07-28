// Problem: Palindromic Twist
// Link to the problem: https://codeforces.com/contest/1027/problem/A
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
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        const ll x = abs(s[l] - s[r]);
        if (x != 0 && x != 2)
        {
            cout << "NO" << endl;
            return;
        }
        l++;
        r--;
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