// Problem: Super Agent
// Link to the problem: https://codeforces.com/contest/12/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    if ((s[0][0] == s[2][2]) && (s[0][1] == s[2][1]) && (s[0][2] == s[2][0]) && (s[1][0] == s[1][2]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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