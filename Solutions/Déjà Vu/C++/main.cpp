// Problem: Déjà Vu
// Link to the problem: https://codeforces.com/contest/1504/problem/A
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
    bool x = true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'a')
        {
            x = false;
            break;
        }
    }
    if (x)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        string ans = 'a' + s;
        ans = isPalindrome(ans, 0, n) ? s + 'a' : ans;
        cout << ans << endl;
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