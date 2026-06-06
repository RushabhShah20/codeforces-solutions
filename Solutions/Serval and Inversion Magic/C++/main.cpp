// Problem: Serval and Inversion Magic
// Link to the problem: https://codeforces.com/contest/1789/problem/B
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
    ll i = 0, j = n - 1, y = 0;
    bool x = true;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (x)
            {
                y++;
            }
            x = false;
        }
        else
        {
            x = true;
        }
        i++;
        j--;
    }
    const string ans = y <= 1 ? "Yes" : "No";
    cout << ans << endl;
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