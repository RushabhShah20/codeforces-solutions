// Problem: Mike and palindrome
// Link to the problem: https://codeforces.com/contest/798/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll k = 0, i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            k++;
        }
        i++;
        j--;
    }
    const string ans = ((n & 1 && k <= 1) || (!(n & 1) && k == 1)) ? "YES" : "NO";
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