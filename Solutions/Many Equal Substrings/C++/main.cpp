// Problem: Many Equal Substrings
// Link to the problem: https://codeforces.com/contest/1029/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll j = 0;
    for (int i = 1; i < n; i++)
    {
        if (s.substr(i) == s.substr(0, n - i))
        {
            j = n - i;
            break;
        }
    }
    string ans = s;
    for (ll i = 0; i < k - 1; i++)
    {
        ans.append(s.substr(j));
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