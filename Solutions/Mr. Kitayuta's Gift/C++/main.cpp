// Problem: Mr. Kitayuta's Gift
// Link to the problem: https://codeforces.com/contest/505/problem/A
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
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            const char c = 'a' + j;
            const string ans = s.substr(0, i) + c + s.substr(i);
            if (isPalindrome(ans, 0, n))
            {
                cout << ans << endl;
                return;
            }
        }
    }
    cout << "NA" << endl;
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