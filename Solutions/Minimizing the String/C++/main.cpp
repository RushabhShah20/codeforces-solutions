// Problem: Minimizing the String
// Link to the problem: https://codeforces.com/contest/1076/problem/A
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
    ll j = n - 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            j = i;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == j)
        {
            s.erase(i, 1);
            break;
        }
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