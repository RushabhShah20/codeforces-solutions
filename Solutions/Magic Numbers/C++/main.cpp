// Problem: Magic Numbers
// Link to the problem: https://codeforces.com/contest/320/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.front() != '1')
    {
        cout << "NO" << endl;
        return;
    }
    int count = 0;
    for (const char c : s)
    {
        if (c != '1' && c != '4')
        {
            cout << "NO" << endl;
            return;
        }
        if (c == '4')
        {
            count++;
        }
        else
        {
            if (count >= 3)
            {
                cout << "NO" << endl;
                return;
            }
            count = 0;
        }
    }
    if (count >= 3)
    {
        cout << "NO" << endl;
        return;
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