// Problem: Collecting Beats is Fun
// Link to the problem: https://codeforces.com/contest/373/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    vector<ll> a(9);
    for (ll i = 0; i < 4; i++)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (isdigit(s[i][j]))
            {
                a[s[i][j] - '1']++;
            }
        }
    }
    for (ll i = 0; i < 9; i++)
    {
        if (a[i] > 2 * n)
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