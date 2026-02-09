// Problem: Chat room
// Link to the problem: https://codeforces.com/contest/58/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const string t = "hello";
    const ll m = s.size(), n = t.size();
    ll i = 0, j = 0;
    while (i < m && j < n)
    {
        if (s[i] == t[j])
        {
            j++;
        }
        i++;
    }
    if (j < n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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