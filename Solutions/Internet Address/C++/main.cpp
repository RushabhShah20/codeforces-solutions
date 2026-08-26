// Problem: Internet Address
// Link to the problem: https://codeforces.com/contest/245/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll j = s[0] == 'h' ? 4 : 3;
    s.insert(j, "://");
    const ll n = s.size();
    for (ll i = j + 4; i < n; i++)
    {
        if (s.substr(i, 2) == "ru")
        {
            s.insert(i + 2, 1, '/');
            s.insert(i, 1, '.');
            break;
        }
    }
    if (s.back() == '/')
    {
        s.pop_back();
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