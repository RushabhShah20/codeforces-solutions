// Problem: Ksusha the Squirrel
// Link to the problem: https://codeforces.com/contest/299/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            x++;
        }
        else
        {
            if (x >= k)
            {
                cout << "NO" << endl;
                return;
            }
            x = 0;
        }
    }
    if (x >= k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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