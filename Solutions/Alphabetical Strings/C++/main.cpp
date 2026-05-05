// Problem: Alphabetical Strings
// Link to the problem: https://codeforces.com/contest/1547/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n == 1)
    {
        if (s == "a")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    ll m = n - 1, i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] > s[j])
        {
            if (s[i] - 'a' != m)
            {
                cout << "NO" << endl;
                return;
            }
            i++;
        }
        else if (s[i] < s[j])
        {
            if (s[j] - 'a' != m)
            {
                cout << "NO" << endl;
                return;
            }
            j--;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
        m--;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}