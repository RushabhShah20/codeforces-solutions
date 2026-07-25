// Problem: Start Up
// Link to the problem: https://codeforces.com/contest/420/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const string t = "BCDEFGJKLNPQRSZ";
    const ll n = s.size();
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            cout << "NO" << endl;
            return;
        }
        if (t.find(s[l]) != string::npos)
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
    solve();
    return 0;
}