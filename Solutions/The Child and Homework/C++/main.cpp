// Problem: The Child and Homework
// Link to the problem: https://codeforces.com/contest/437/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    string t;
    for (ll i = 0; i < 4; i++)
    {
        const ll n = s[i].size();
        bool x = true, y = true;
        for (ll j = 0; j < 4; j++)
        {
            if (i != j)
            {
                const ll m = s[j].size();
                if ((n - 2) < 2 * (m - 2))
                {
                    x = false;
                }
                if (2 * (n - 2) > (m - 2))
                {
                    y = false;
                }
            }
        }
        if (x || y)
        {
            t.append(1, 'A' + i);
        }
    }
    const char ans = t.size() == 1 ? t[0] : 'C';
    cout << ans << endl;
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