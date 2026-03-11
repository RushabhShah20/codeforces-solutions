// Problem: Amusing Joke
// Link to the problem: https://codeforces.com/contest/141/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string x, y, z;
    cin >> x >> y >> z;
    vector<ll> a(26, 0), b(26, 0);
    for (const char c : x)
    {
        a[c - 'A']++;
    }
    for (const char c : y)
    {
        a[c - 'A']++;
    }
    for (const char c : z)
    {
        b[c - 'A']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
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