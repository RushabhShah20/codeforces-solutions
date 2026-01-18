// Problem: Prepend and Append
// Link to the problem: https://codeforces.com/contest/1791/problem/C
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
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    const ll ans = j - i + 1;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}