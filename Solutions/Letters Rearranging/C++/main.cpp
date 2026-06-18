// Problem: Letters Rearranging
// Link to the problem: https://codeforces.com/contest/1093/problem/B
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
    sort(s.begin(), s.end());
    if (isPalindrome(s, 0, n - 1))
    {
        cout << -1 << endl;
        return;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}