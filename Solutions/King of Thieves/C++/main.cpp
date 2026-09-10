// Problem: King of Thieves
// Link to the problem: https://codeforces.com/contest/526/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; i + 4 * j < n; j++)
        {
            if (s[i] == '*' && s[i + j] == '*' && s[i + 2 * j] == '*' && s[i + 3 * j] == '*' && s[i + 4 * j] == '*')
            {
                cout << "yes" << endl;
                return;
            }
        }
    }
    cout << "no" << endl;
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