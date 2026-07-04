// Problem: Code obfuscation
// Link to the problem: https://codeforces.com/contest/765/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    char c = 'a';
    for (ll i = 0; i < n; i++)
    {
        if (s[i] > c)
        {
            cout << "NO" << endl;
            return;
        }
        if (s[i] == c)
        {
            c++;
        }
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