// Problem: Tom Riddle's Diary
// Link to the problem: https://codeforces.com/contest/855/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    unordered_set<string> s;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (s.count(t))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            s.insert(t);
        }
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