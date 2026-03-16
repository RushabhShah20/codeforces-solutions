// Problem: Gennady and a Card Game
// Link to the problem: https://codeforces.com/contest/1097/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string t;
    cin >> t;
    vector<string> s(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < 5; i++)
    {
        if (s[i][0] == t[0] || s[i][1] == t[1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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