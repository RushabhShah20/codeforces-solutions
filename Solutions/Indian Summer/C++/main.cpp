// Problem: Indian Summer
// Link to the problem: https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<string> s;
    for (ll i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        s.insert(x + " " + y);
    }
    cout << s.size() << endl;
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