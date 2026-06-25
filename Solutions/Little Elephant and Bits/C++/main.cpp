// Problem: Little Elephant and Bits
// Link to the problem: https://codeforces.com/contest/258/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            x = true;
            break;
        }
    }
    if (!x)
    {
        s.erase(0, 1);
    }
    cout << s << endl;
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