// Problem: LuoTianyi and the Palindrome String
// Link to the problem: https://codeforces.com/contest/1825/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(const string &s)
{
    const ll n = s.size();
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (!isPalindrome(s.substr(i, j)))
            {
                ans = max(ans, j - i);
            }
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