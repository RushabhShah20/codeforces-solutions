// Problem: Antipalindrome
// Link to the problem: https://codeforces.com/contest/981/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(const string &s, ll i, ll j)
{
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            if (!isPalindrome(s, i, j))
            {
                ans = max(ans, j - i + 1);
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
    solve();
    return 0;
}