// Problem: Anton and Letters
// Link to the problem: https://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    unordered_set<char> t;
    for (const char c : s)
    {
        if (islower(c))
        {
            t.insert(c);
        }
    }
    cout << t.size() << endl;
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