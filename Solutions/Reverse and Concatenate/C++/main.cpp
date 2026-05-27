// Problem: Reverse and Concatenate
// Link to the problem: https://codeforces.com/contest/1634/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(const ll n, const string &s)
{
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }
    const ll ans = isPalindrome(n, s) ? 1 : 2;
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