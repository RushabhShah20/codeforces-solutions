// Problem: In-game Chat
// Link to the problem: https://codeforces.com/contest/1411/problem/A
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
    ll m = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            m++;
        }
        else
        {
            break;
        }
    }
    if (2 * m > n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}