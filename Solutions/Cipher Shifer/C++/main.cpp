// Problem: Cipher Shifer
// Link to the problem: https://codeforces.com/contest/1840/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, i = 0, j = 1;
    cin >> n;
    string s, ans;
    cin >> s;
    while (j < n)
    {
        if (s[i] == s[j])
        {
            ans.append(1, s[i]);
            i = j + 1;
            j = i + 1;
        }
        else
        {
            j++;
        }
    }
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