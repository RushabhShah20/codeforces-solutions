// Problem: Fair Playoff
// Link to the problem: https://codeforces.com/contest/1535/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    vector<ll> s = {s1, s2, s3, s4};
    sort(s.begin(), s.end());
    if (s1 == s[3])
    {
        if (s3 == s[2] || s4 == s[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (s2 == s[3])
    {
        if (s3 == s[2] || s4 == s[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (s3 == s[3])
    {
        if (s1 == s[2] || s2 == s[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (s1 == s[2] || s2 == s[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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