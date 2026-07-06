// Problem: Reverse a Substring
// Link to the problem: https://codeforces.com/contest/1155/problem/A
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
    for (ll i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
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